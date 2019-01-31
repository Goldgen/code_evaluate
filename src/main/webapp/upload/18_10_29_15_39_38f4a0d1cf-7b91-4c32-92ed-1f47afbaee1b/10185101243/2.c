#include <stdio.h>
#include <stdlib.h>

int main()
{
    double e,x,i;
    for(x=1,i=0;x>pow(10,-6);i=i+1.0,x=x/i)
        e=e+x;
    printf("%.6f",e);
    return 0;
}
