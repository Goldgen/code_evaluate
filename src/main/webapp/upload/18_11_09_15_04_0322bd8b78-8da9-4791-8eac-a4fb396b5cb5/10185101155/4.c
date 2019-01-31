#include <stdio.h>
int main()
{
   long long  n;
   scanf("%lld",&n);
   long long  p,t;
   p=1;
   for(t=1;t<=n;t++)
   {
       p=p*t;
       if(p>20181111)
        p = p%20181111;
   }
   printf("%lld",p%20181111);
   return 0;
}
