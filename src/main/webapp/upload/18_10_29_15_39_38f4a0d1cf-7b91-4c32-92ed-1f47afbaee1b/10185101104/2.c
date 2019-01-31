#include <stdio.h>

int main()
{
    double n=1,e=1;
    int i;
    for(i=1;i<10;i++)
    {
        n/=i;
        e+=n;
    }
    printf("%lf",e);
    return 0;
}
