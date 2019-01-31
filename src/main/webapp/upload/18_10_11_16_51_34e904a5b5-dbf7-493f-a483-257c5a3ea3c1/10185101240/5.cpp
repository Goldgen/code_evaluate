#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j=1;
    for(i=10;i>=1;i--);//10!
    j=j*i;
    printf("%ld\n",j);
    int a,b=1;
    for(a=20;a>=1;a--);//20!
    b=b*a;
    printf("%ld",b);
   return 0;
}
