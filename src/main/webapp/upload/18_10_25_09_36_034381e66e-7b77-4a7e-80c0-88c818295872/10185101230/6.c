#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    n=n-1;

    for( int i = -1 ; i <= n ; i ++)
    { for( int j = 0 ; j < n ; j ++ )

        { if(  i == n-1 ||j == 0 || j == i+1 )
        printf("*");
   if((i<n-1)&&(j>0)&&(j<i+1))
        printf(" ");
        }
    if(i<n-1)
    printf("\n");
    }

    }
