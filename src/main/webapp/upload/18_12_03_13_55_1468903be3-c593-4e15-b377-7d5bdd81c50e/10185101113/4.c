#include <stdio.h>
#include <string.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int juzhen[m][n],zhuanzhi[n][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&juzhen[i][j]);
            zhuanzhi[j][i]=juzhen[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d",zhuanzhi[i][j]);
            if(j!=m-1)
                printf(" ");
        }
        if(i!=n-1)
        printf("\n");
    }
    return 0;
}
