#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double total=0.0;
    double value=0.0;
    unsigned int count=5;
    unsigned int i=1;
    for(;i<=count;++i)
    {
        scanf("%lf",&value);
        total+=value;
    }

    printf("%.1lf",total/count);
    return 0;
}
