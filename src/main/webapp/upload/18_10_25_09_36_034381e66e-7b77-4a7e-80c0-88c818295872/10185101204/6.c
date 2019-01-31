#include <stdio.h>


int main()
{
      int n=0,i=1,j=1;
      scanf("%d",&n);

        printf("*");
      for(i=1;i<=n-2;i++)
      {
          printf("\n*");
          for(j=1;j<i;j++)
          {printf(" ");}
            printf("*");
        }
        printf("\n");

        for (i=1;i<=n;i++)
        printf("*");

}