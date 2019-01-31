#include <stdio.h>
#include <stdlib.h>

int main()
{double e=1;
long j=1;
for (int i=1;1.0/j>0.000001;i++)
{
    j*=i;
    e+=1.0/j;
}
printf("%.6f",e);
    return 0;
}