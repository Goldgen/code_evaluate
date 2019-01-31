#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,n,i,j;
   scanf("%d",&n);
   int shuz[n],zeng[n+1];
   for(i=0;i<n;i++)
   {
       scanf("%d",&shuz[i]);
   }
   scanf("%d %d",&a,&b);
   for(j=0;j<n+1;j++)
   {
       if(j<a)
        zeng[j]=shuz[j];
       if(j==a)
        zeng[j]=b;
       if(j>a)
        zeng[j]=shuz[j-1];
   }
   for(i=0;i<n+1;i++)
   {
       if(i==0)
        printf("%d",zeng[i]);
       else
        printf(" %d",zeng[i]);
   }
   return 0;
}
