#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a,i,b,C,n;
    double sum;
    sum=0;
    a=1;
    i=1;
    b=2;
    n=1;
    while(n<=50)
    {
        sum=sum+(double)b/a;
        C=a+b;
        a=b;
        b=C;
        ++n;
    }
        printf("%.2lf",sum);
    return 0;
}