#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,n,i,j,k;
   scanf("%d",&n);
   int shuz[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&shuz[i]);
   }
   scanf("%d",&a);
   for(j=0,k=0;j<n;j++)
   {
       if(shuz[j]==a)
       {
        if(k==0)
       {
           printf("%d",j);
           k++;
       }
       else
       {
           printf(" %d",j);
           k++;
       }
       }
   }
   if(k==0)
    printf("ERROR");
   return 0;
}
