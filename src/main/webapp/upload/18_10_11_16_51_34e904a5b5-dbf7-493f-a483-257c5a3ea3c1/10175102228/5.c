#include <stdio.h>
#include <stdlib.h>

int main()
{ long long a=1,b=1;
   int i;
   for(i=1;i<=10;i++)
   { a=a*i;

   }
   for(i=1;i<=20;i++)
   {b=b*i;

   }
   printf("%lld\n",a);
   printf("%lld",b);
}
