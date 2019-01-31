#include <stdio.h>
int main()
{
   long long a;
   a = 1;
   int m,n;
   m = 1;
   scanf("%d",&n);
   while(m<=n)
   {
       a = a*m;
       m++;
   }
   printf("%lld",a);
   return 0;
   


}