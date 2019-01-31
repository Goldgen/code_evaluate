


#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,i=1,j=1;
    long long c=1,d=1;

    a=10;
    b=20;

    do
    {
        i++;
        c=c*i;
    }while(i<a);

    do
    {
        j++;
        d=d*j;
    }while(j<b);

    printf("%lld\n%lld",c,d);

    return 0;
}