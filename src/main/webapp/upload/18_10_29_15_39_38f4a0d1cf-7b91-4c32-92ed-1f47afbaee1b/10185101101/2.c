#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;
    double j,k=0.0L;
    j=1;k=1.0L;
    for(i=1;i<=15;++i)
    {
        j*=1.0/i;
        k+=j;
    }
    printf("%.6lf",k);
    return 0;
}
