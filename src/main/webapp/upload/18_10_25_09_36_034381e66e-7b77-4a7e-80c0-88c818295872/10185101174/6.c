#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int c=0;
    scanf("%d",&n);
    if((n>=4)&&(n<=100))
    {
    printf("*");
    for(int a=0;a<n-2;a++)
      {
        printf("\n*");
        for(int b=0;b<c;b++)
        {
            printf(" ");
        }
        c+=1;
        printf("*");
      }
      printf("\n");
      for(int d=0;d<n;d++)
      printf("*");
    }

}