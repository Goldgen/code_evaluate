#include <stdio.h>

int main()
{
   int i,n=0;
   int a[10000];
   a[0]=1;
   a[1]=1;
   for(i=2;i<=10000;i++)
   a[i]=a[i-2]+a[i-1];
   scanf("%d",&n);
		if(n==0)
		printf("0");
   else printf("%d",a[n-1]);
   return a[n-1];
}
