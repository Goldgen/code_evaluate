#include <stdio.h>

int main()
{
    int m, n, i, j;
    scanf("%d%d", &m, &n);
    char in[m][n];
    for(i=0; i<m; i++)
        for(j=0; j<n; j++)
            scanf("%d", &in[i][j]);
    for(j=0; j<n; j++)
    {
        if(j!=0)
            printf("\n");
        for(i=0; i<m; i++)
        {
            if(i!=0)
                printf(" ");
            printf("%d", in[i][j]);
        }
    }
}
