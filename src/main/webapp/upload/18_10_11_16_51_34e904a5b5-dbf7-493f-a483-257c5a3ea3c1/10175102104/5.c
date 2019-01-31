#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x,a=1;
    long long int b=1;
    for(x=1;x<=10;x++)
    {
        a=a*x;
    }
    for(x=1;x<=20;x++)
    {
        b=b*x;
    }
    printf("%d\n%lld",a,b);
    return 0;
}