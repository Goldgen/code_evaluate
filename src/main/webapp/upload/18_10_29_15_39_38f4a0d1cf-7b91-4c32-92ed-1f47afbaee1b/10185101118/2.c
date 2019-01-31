#include<stdio.h>
int main()
{
    double e=1;
    long j=1;
    for(int i=1;i<=9;i++)
    {
        j*=i;
        e+=1.0/j;
    }
    printf("%.6lf",e);
    return 0;
}