#include<stdio.h>

#include<stdlib.h>

int main()
{
    int m,n,i,j;
    scanf("%d%d\n",&m,&n);
    int s[m][n];
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            scanf("%d",&s[i][j]);
        }

    }

    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=m-2;j++)
        {
            printf("%d ",s[j][i]);
        }
        printf("%d\n",s[m-1][i]);
    }




	return 0;
}
