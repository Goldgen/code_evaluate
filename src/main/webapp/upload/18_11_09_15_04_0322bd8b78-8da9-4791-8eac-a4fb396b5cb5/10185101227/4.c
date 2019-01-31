#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
   int n,i;
   long long y=1;
   scanf("%d",&n);
   for (i=1;i<=n;++i)
    y=y*i%20181111;
    printf("%lld",y);
    return 0;
}
