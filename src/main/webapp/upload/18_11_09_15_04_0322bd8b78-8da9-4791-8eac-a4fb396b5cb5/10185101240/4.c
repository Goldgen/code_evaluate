#include <stdio.h>
#include <stdlib.h>

int main()
{
   long long output=1;
	long long z;
   int n;
   
   scanf("%d",&n);
	if(n==0)
	{
		z=1%20181111;
	}
	else
	{

  for(int i=1;i<=n;i++)
   {
	   output=output*i;
   }
	z=output%20181111;
	}
   printf("%lld",z);
   return 0;
}


