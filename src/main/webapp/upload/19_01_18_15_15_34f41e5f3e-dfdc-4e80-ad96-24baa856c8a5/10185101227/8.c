#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
  int m,i,s,w,x;
  long long n;
  scanf("%lld%d",&n,&m);
  w=0;i=1;x=n;
  while (n>=1)
  { ++w;
    n=n/10;}
 n=x;
 while (m>=w) {m=m-w;}
 while (i<=m)
  { s=n%10;
    n=n/10;
   n=n+pow(10,w-1)*s;
  ++i;}
  printf("%d %lld",w,n);
 return 0;
}
