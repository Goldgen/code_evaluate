#include <stdio.h>
#include <string.h>

int main()
{
    int m=55;
    int n=55;
    
    int arr[m][n];
    
    scanf("%d %d", &m, &n);
    
    
    
    for (unsigned int i = 0; i < m; i++)
    {
        for (unsigned int j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    
    for (unsigned int i = 0; i < m; i++)
    {
        for (unsigned int j = 0; j < n; j++)
        {
            printf("%d", arr[j][i]);
            if (j < n-1) printf(" ");
        }
        
        if (i < m-1) printf("\n");
    }
    
    return 0;
}
