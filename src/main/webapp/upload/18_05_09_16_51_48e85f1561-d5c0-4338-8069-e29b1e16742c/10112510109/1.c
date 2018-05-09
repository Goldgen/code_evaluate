#include<stdio.h>
void main()
{
    int a=0,i;
    double sum=0.0;
    for(i=1;i<=5;i++)
    {
        scanf("%d",&a);
        sum=sum+a;
    }
    sum=sum/5;
    printf("%.2lf",sum);
}