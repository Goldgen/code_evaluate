#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    if((n>=4)&&(n<=10))
        for(int a=0;a<n;a++)
        {
             printf("*");

        }
          for(int b=0;b<n-2;b++)
             {
                  printf("\n*");
                  for(int a=0;a<n-2;a++)
                  {
                       printf(" ");
                  }
                  printf("*");
             }
             printf("\n");
              for(int a=0;a<n;a++)
        {
             printf("*");

        }
}



