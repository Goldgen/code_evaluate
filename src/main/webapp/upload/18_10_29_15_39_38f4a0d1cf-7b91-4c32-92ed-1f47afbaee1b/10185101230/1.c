#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
for(a=1;a<14;a++)
for(b=1;b<20;b++)
{c=100-7*a-5*b;
if(c>=1&&3*c+a+b==100)
printf("%d %d %d",a,b,3*c);}
    return 0;
}
