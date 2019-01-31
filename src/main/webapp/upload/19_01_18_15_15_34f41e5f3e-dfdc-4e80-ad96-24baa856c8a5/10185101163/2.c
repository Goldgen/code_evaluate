#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    double e=0.0,A=1.0;
    for(i=1;i<10;++i)
    {
        A=i*A;
        e=e+1/A;
    }
    printf("%.6f",e+1);
    return 0;
}
