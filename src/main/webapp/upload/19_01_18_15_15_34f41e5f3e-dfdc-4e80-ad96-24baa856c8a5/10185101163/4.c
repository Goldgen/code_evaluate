#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Max=0.0,Min=100.0,Score;
    do{
        scanf("%f",&Score);
        if(Score>Max) Max=Score;
        if((Score<Min)&&(Score>0)) Min=Score;
    }while(Score>0);
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",Max,Min);
    return 0;
}
