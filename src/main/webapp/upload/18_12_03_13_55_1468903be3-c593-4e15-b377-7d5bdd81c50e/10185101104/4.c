#include <stdio.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int origin[m+1][n+1];
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            scanf("%d",&origin[i][j]);
    for(i=1;i<=n;i++)
    {
        printf("%d",origin[1][i]);
        for(j=2;j<=m;j++)
            printf(" %d",origin[j][i]);
        printf("\n");
    }
    return 0;
}
