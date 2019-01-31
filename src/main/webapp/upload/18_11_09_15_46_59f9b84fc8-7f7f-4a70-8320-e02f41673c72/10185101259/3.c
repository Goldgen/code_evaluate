#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch='A'-1;
   int n,i,j,k;
   scanf("%d",&n);
   for(k=1;k<=n;k++)
   {
   for(i=1;i<=n-k;i++)
    printf(" ");
    for(j=1;j<=2*k-1;j++)
   printf("%c",ch+k);
   printf("\n");
   }
   for(k=1;k<=n-1;k++)
   {
   for(i=1;i<=k;i++)
   printf(" ");
   for(j=1;j<=((2*n-1)-(2*k));j++)
   printf("%c",ch+k+n);
   if(k<=n-2)
    printf("\n");

    }


return 0;}