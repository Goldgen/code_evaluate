#include <stdio.h>
int main(void)
{
    int n,i=1,j=1;
    scanf("%d",&n);
    while(i>=1&&i<=n)
    {
        if(i==1)
        {
            while(j>=1&&j<=n)
            {
                printf("*");
                j++;
            }
        }
        else if(i==n)
           {
            j=1;
            printf("\n*");
            j++;
            while(j>1&&j<=n)
            {
                printf("*");
                j++;
            }
           }
        else
        {
            j=1;
            while(j>=1&&j<=n)
            {
              if(j==1)
                printf("\n*");
              else if(j==n)
                printf("*");
              else
                printf(" ");
              j++;
            }
            j=1;
        }
        i++;
    }
    return 0;
}
