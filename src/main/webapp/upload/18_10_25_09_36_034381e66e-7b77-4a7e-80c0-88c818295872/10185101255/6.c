#include <stdio.h>

int main()
{
    unsigned int n,i,j=0;
    scanf("%u",&n);
    
    printf("*\n");
    for (i=2; i<=n-1; i++)
    {
        printf("*");
        
        for (j=1; j<=i-2; j++)
        {
            printf(" ");
        }
        
        printf("*\n");
        
    }
    
    for (j=1; j<=n; j++)
    {
        printf("*");
    }
    
    return 0;
    
    
}

