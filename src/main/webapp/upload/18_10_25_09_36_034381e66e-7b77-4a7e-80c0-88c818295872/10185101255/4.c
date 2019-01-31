#include <stdio.h>

int main()
{
    unsigned int n,i,j=0;
    scanf("%d",&n);
    
    for (i=1; i<=n; i++)
        printf("*");
    
    for (j=1; j<=n-2; j++)
    {
        printf("\n*");
        
        for (i=1; i<=n-2; i++)
        {
            printf(" ");
        }
        
        printf("*");
    }
    
    printf("\n");
    
    for (i=1; i<=n; i++)
        printf("*");
    
    return 0;
    
    
}
