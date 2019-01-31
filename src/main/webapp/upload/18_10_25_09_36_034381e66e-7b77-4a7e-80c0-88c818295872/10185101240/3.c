#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long output=1;
   int n;

   scanf("%d",&n);

   while((0<n)&&(n<20))
   {
	   output=output*n;
	   n--;
   }
   printf("%lld",output);
   return 0;
}

