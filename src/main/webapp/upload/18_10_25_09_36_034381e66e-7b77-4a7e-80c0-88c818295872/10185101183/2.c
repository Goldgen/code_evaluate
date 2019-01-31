#include<stdio.h>
int main(void)
{
    int a=0;
    double b=0;
    double c=0;
    for(;a<5;++a)
    {
        scanf("%lf",&b);
        c=c+b;
    }
    printf("%.1lf",c/5);
    return 0;
}
