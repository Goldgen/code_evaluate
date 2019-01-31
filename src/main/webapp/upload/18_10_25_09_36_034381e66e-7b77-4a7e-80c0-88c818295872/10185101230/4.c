#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if( n<4 || n>10 )
        return 0 ;
    for( int i = 0 ; i < n ; i ++)
    { for( int j = 0 ; j < n ; j ++ )

        { if( i == 0 || i == n-1 ||j == 0 || j == n-1 )
        printf("*");
    else
        printf(" ");
        }
    if(i<n-1)
    printf("\n");
    }

    }


