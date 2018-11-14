#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char result[80];
    int score, count, l, i, tc;

    while(scanf("%d", &tc) == 1) {
        while(tc) {
            scanf("%s",&result);

            l = strlen(result);
            score = 0;
            count = 0;

            for(i=0; i<l; i++){
                if(result[i] == 'O') {
                    count++;
                    score = score+count;
                }else{
                    count = 0;
                }
            }
            printf("%d\n", score);


            tc--;
        }
    }



    return 0;
}
