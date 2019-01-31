#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int n,i,t,m=0;
   int s[1000],list[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d ",&s[i]);
   }
   scanf("%d",&t);
   for(i=0;i<n;i++)
   {
       if(s[i]==t)
       {
           m++;
           list[m]=i;
       }
   }
   if(m==0)
   {
       printf("ERROR");
   }
   else
   {
       for(i=1;i<=m;i++)
       {
           printf("%d",list[i]);
           if(i!=m)
           {
               printf(" ");
           }
       }
   }
   return 0;
}
