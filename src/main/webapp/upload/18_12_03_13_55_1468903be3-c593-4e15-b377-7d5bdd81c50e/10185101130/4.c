#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i = 0;i <= m-1;i++)
    {
        for(int j = 0;j <= n-1;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    for(int j = 0;j <= n-1;j++)
    {
        for(int i = 0;i <= m-1;i++)
        {
            if(i == m-1)
                printf("%d\n",mat[i][j]);
            else
                printf("%d ",mat[i][j]);
        }
    }
    return 0;
}
