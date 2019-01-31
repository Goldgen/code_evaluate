#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
   int data[n];
   for(i=0;i<=n-1;i++)
   {
       scanf("%d",&data[i]);
   }
   int a=1,ans=0;
   for (i=1;i<n;i++)
    if (data[i]==data[i-1]) a++;
   else
   {
	   if (a>ans) ans=a;
	   	a=1;
    }
    if (a>ans) ans=a;
    printf("%d\n",ans);


    return 0;
}