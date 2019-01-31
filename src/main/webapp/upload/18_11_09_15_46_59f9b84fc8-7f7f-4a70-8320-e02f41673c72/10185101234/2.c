#include<stdio.h>
int main()
{
    double n=1.0,m=2.0;
    int i;
    double sum=0;
    for(i=1;i<=50;++i)
    {
        sum=sum+m/n;
        m=n+m;
        n=m-n;
    }
    printf("%.2lf",sum);
    return 0;
}