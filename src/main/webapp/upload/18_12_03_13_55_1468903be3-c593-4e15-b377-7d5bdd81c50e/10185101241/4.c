#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,m,i,j;
    scanf("%d%d\n",&m,&n);
    int a[50][50];
    for(j=0;j<m;j++)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[j][i]);
        }
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<m-1;i++)
        {
            printf("%d ",a[i][j]);
        }
        printf("%d\n",a[m-1][j]);
    }
    return 0;
}
