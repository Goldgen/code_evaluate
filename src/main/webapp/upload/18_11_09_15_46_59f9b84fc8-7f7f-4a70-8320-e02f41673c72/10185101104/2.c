#include <stdio.h>

int main()
{
    double temp,sum=2,m=3,n=2;
    int i;
    for(i=2;i<=50;i++)
    {
        sum+=m/n;
        temp=m;
        m=m+n;
        n=temp;
    }
    printf("%.2lf",sum);
    return 0;
}
