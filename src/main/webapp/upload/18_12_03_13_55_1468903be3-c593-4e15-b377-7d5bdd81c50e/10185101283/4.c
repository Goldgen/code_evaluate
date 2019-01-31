#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d\n",&m,&n);
    int a[m][n];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
            scanf("%d",&a[i][j]);
    }
    int i=0;
    int j=0;
    for(;j<n;++j)
    {
        for( i=0;i<m-1;++i)
                printf("%d ",a[i][j]);
        printf("%d\n",a[i][j]);
    }
    return 0;
}