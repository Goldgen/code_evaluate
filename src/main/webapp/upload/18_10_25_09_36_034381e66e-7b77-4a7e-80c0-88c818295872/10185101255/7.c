#include <stdio.h>
int main()
{
    unsigned int n,i,j=0;
    scanf("%u",&n);
    for (i=0; i<(n-1)/2; i++)
    {
        for (j=1; j<=n; j++)
        {
            
            if(j==(n+1)/2+i)
            {
                printf("*");
                break;
            }
            if(j==(n+1)/2-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for (i=1; i<=n; i++)
        printf("*");
    return 0;
}