#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int n,i,t_0,t_1,m;
   int s[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d ",&s[i]);
   }
   scanf("%d %d",&t_0,&t_1);
   for(m=n-1;m>=t_0;m--)
   {
       s[m+1]=s[m];
   }
   s[t_0]=t_1;
   for(i=0;i<=n;i++)
   {
       printf("%d",s[i]);
       if(i!=n)
       {
           printf(" ");
       }
   }
   return 0;
}