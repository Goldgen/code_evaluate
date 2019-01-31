#include <stdio.h>
#include <stdlib.h>

int main()
{int n;
scanf("%d",&n);
for(int j=1;j<(n+1)/2;j++)
{  if(j==1)
   {
   for(int i=1;i<=(n-2*j+1)/2;i++)
   {
       printf(" ");
   }
       printf("*\n");
   }
   else
   {
           for(int i=1;i<=(n-2*j+1)/2;i++)
   {
       printf(" ");
   }
       printf("*");
           for(int i=1;i<=2*j-3;i++)
   {
       printf(" ");
   }
   printf("*\n");
   }
}
for(int i=1;i<=n;i++)
{
    printf("*");
}
    return 0;
}