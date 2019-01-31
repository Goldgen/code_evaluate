#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,n;
    scanf("%d",&n);
    for (i=1;i<=n;i++)
       {
           if(i==n)
            {
            for(j=1;j<=i;j++)
            printf("*");
           }
      else if (i==1)
        printf("*");
       else
       {
           printf("*");
           for (j=2;j<=i-1;j++)
            printf(" ");
           printf("*");
         }
       if(i!=n)
        printf("\n");
       }
    return 0;
}