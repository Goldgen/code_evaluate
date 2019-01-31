#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s=0,x=100.0;
    int i;
    s=s+x;
    for(i=1;i<=9;++i)
    {
        s=s+x;
        x=x/2;
    }
    printf("%.3lf %.3lf",s,x/2);
    return 0;
}
