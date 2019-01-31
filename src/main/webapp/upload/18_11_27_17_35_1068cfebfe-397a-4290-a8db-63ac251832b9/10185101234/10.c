#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,j;
   int n;
   scanf("%d",&n);
   int a[n];
   int temp;
   int flag;
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=1;i<n;i++)
   {
       flag=0;
       for(j=n-1;j>=i;j--)
       {
           if (a[j] < a[j-1])
           {
               flag=1;
               temp = a[j];
               a[j]=a[j-1];
               a[j-1]=temp;
           }
       }
       if(flag==0)
       {
           break;
       }
   }
   for(i=0;i<n;i++)
   {
       printf("%d",a[i]);
       if(i<n-1) printf(" ");
   }
   return 0;
}
