#include <stdio.h>
int fun(long long int);
int main()
{long long int n;
scanf("%lld",&n);
printf("%d",fun(n));
}
int fun(long long int a)
{ long long int j=1,x=0,m=0;
  x=a;
  for(long long int i=1;i<=a;i*=10)
  {m=m+x%10*j;
  j*=8;
  x/=10;}
  return m;
}