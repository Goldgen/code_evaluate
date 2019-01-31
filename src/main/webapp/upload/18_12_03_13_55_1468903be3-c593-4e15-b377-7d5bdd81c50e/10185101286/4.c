#include<stdio.h>
#include<string.h>
int main()
{
    int shuzu[50][50];
    int zhuanzhi[50][50];
    int m,n,i,j,k,l;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=0;i<m;++i)
    {
        for(j=0;j<n;++j)
        {
            scanf("%d",&shuzu[i][j]);
        }
    }
    for(k=0;k<n;++k)
    {
        for(l=0;l<m;++l)
        {
            zhuanzhi[k][l]=shuzu[l][k];
        }
    }
    for(k=0;k<n;++k)
    {
        printf("%d",zhuanzhi[k][0]);
        for(l=1;l<m;++l)
        {
            printf(" %d",zhuanzhi[k][l]);
        }
        printf("\n");
    }
    return 0;
}
