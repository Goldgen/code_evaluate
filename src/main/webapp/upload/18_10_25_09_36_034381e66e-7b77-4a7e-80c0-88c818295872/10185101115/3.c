#include <stdio.h>
#include <stdlib.h>

int main()
{
unsigned int  i=0,n;
unsigned long long  s=1;
scanf("%u",&n);
   while (i<n)
    {i++;
    s*=i;
    }
    printf("%llu",s);
    return 0;
}
