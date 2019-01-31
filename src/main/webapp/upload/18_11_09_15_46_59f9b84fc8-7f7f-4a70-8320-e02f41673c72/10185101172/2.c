#include<stdio.h>

int main ()
{
    double i=2.0;
    double j=1.0;
    double sum,j1=0.0;
    int count=1;
    for(;count<=50;count++)
    {
        sum+=i/j;
        j1=i+j;
        j=i;
        i=j1;
    }
    printf("%.2lf",sum);
    return 0;}
