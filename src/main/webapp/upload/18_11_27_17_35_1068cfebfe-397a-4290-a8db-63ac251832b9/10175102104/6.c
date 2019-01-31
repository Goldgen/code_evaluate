#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
   int n,i,t,m=-1;
   int s[1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&s[i]);
   }
   scanf("%d",&t);
   for(i=0;i<n;i++)
   {
       if(s[i]==t)
       {
           m=i;
           break;
       }
   }
   if(m==-1)
   {
       printf("ERROR");
   }
   else
   {
       if(m==0)
       {
           for(i=1;i<n;i++)
           {
               printf("%d",s[i]);
               if(i!=n-1)
               {
                   printf(" ");
               }
           }
       }
       else
       {
           if(m==n-1)
           {
               for(i=0;i<n-1;i++)
               {
                   printf("%d",s[i]);
                   if(i!=n-2)
                   {
                       printf(" ");
                   }
               }
           }
           else
           {
               for(i=0;i<n;i++)
               {
                   printf("%d",s[i]);
                   if(i!=n-1)
                   {
                       printf(" ");
                   }
               }
           }
       }
   }
   return 0;
}
