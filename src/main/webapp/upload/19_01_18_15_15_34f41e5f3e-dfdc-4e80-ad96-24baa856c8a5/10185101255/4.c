#include<stdio.h>
int main()
{
    double n,max,min;
    
    scanf("%lf",&n);
    max=min=n;
    while(scanf("%lf",&n))
    {
        if(n<0) break;
        if(n>max) max=n;
        if(n<min) min=n;
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}