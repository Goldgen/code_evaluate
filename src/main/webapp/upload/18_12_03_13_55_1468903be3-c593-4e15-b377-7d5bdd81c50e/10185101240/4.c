#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int a[55][55];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    int i=0,j=0;
    for(;j<n;++j)
    {
        for( i=0;i<m-1;++i)
                printf("%d ",a[i][j]);
        printf("%d\n",a[i][j]);
    }
    return 0;
}