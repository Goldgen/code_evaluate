#include <stdio.h>

int main()
{
   int n, i;
   long long x;
   scanf("%d", &n);

   for(x=1LL,i=1; i<=n; i++)
    x = x*i;

   x = x%20181111;
   printf("%ld", x);
}
