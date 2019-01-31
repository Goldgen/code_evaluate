#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int i,j,n=0;
   scanf("%d",&n);
   for(i=1;i<=n-1;i++)
   {
       for(j=2*(n-i);j>0;j--)
       printf(" ");
    printf("1");
       {
           for(j=2;j<=i;j++)
            printf("+%d",j);
       }
           printf("=");
        for(j=i;j>1;j--)
            printf("%d+",j);
            printf("1\n");
   }
   printf("1");
   for(i=2;i<=n;i++)
    printf("+%d",i);
    printf("=");
  for(i=n;i>1;i--)
    printf("%d+",i);
  printf("1");
return 0;
}
