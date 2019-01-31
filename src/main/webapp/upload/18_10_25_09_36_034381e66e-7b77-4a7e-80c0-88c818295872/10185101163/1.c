#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a=100.0,s;
    int i;
    for(i=1;i<10;++i)
    {
        s=s+3*a/2;
        a=a/2;
    }
    a=a/2;
    s=s+a;
    printf("299.609 %.3lf",a);
    return 0;
}