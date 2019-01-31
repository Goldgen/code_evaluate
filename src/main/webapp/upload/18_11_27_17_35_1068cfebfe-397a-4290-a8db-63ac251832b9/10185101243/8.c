#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int n,i;
    scanf("%d",&n);
   int data[n];
   for(i=0;i<=n-1;i++)
   {
       scanf("%d",&data[i]);
   }
   int s=1,ans=0;
   for (i=1;i<n;i++)
    if (data[i]==data[i-1]) s++;
   else
   {
	   if (s>ans) ans=s;
	   	s=1;
    }
    if (s>ans) ans=s;
    printf("%d\n",ans);


    return 0;
}
