#include <stdio.h>
#include <stdlib.h>
int r=0;
int fun(long n);
int main()
{
    long n;
    scanf("%ld",&n);
   fun(n);
   printf("%d",r);
   return 0;
}
int fun(long n)
{
    int m;
    m=n%10;
    n/=10;
    r+=m;
    if(n>0)
       fun(n);
    return r;
}