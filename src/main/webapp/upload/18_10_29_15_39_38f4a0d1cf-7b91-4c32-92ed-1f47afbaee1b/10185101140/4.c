#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float max=0,min=100,score;
    int i;
    for(i=1;;i++){
        scanf("%f",&score);
        if(score<0) break;
        else {
                if(score>=max) max=score;
                if(score<=min) min=score;
        }
    }
    if(i!=1){
        printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    }

    return 0;
}
