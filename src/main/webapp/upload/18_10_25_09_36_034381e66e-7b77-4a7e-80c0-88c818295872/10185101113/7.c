#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int j=1;
    int m=-1;
    scanf("%d",&n);
    for (int i=n/2;i>0;i--)
        printf(" ");
    printf("*\n");
    n=n/2;
    for (int i=n;i>=2;i--)
    {for (int i=n-j;i>0;i--)
        {
            printf(" ");
        }
        j++;
        printf("*");
    for ( int i=m+2;i>0;i--)
        {
            printf(" ");
        }
        m +=2;
        printf("*\n");
    }
    for (int i=2*n+1;i>0;i--)
        printf("*");


    return 0;
}