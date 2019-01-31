
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void fun(long long m);
int main()
{
  long long y;
  scanf("%lld",&y);
  fun(y);
  
  return 0;
}
void fun(long long m)
{
   long long i=0,n;
   int x=0;
   do {
       n=m;
       m/=10;
       n=n%10;
       x=x+n*(1<<(3*i));
       i++;
    } while(m!=0);
    printf("%d",x);
}
