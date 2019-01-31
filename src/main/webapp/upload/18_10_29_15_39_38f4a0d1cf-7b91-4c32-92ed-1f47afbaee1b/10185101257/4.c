#include<stdio.h>
int main()
{
    double score,max=0,min=100;
    while(scanf("%lf",&score))
    {
        if(score<0)
            break;
        if(score>max)
            max=score;
        if(score<min)
            min=score;
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}