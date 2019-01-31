#include<stdio.h>
#include<math.h>
int main (void)
{
    int n;
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {for(int j=1;j<=i;j++)
   {
	   if(i*j<=9)
       printf(" %d * %d =  %d",j,i,i*j);
	 else
		     printf(" %d * %d = %d",j,i,i*j);
  
   }
    if(i<n)printf("\n");
	else printf("");
   }
   return 0;

}