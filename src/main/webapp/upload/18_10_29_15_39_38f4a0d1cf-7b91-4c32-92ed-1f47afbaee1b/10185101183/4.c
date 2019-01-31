#include<stdio.h>
int main(void)
{
    double n,min,max,first=1;
    while(1)
    {
        scanf("%lf",&n);
        if(n<0) break;
        if(first)
        {
            first=0;
            max=min=n;
        }
        else
        {
            if(n>max)
                max=n;
            if(n<min)
                min=n;
        }

    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}