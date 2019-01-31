#include <stdio.h>
#include <stdlib.h>

int main()
{
double a,s,m;
a=1;
m=1;
s=0;
for(a=1;m<1E6;a++)
{
    m=m*a;
    s=s+(1/m);
}
printf("%.6f",s+1);
    return 0;
}
