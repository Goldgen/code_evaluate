#include<stdio.h>
int main()
{
    int a,i,j;
    int shu[10][10];
    scanf("%d",&a);
    for(i=0;i<a;++i)
    {
     shu[i][0]=1;
     shu[i][i]=1;
    }
    shu[0][0]=1;
    for(i=2;i<a;++i)
    {
        for(j=1;j<i;++j)
        {
            shu[i][j]=shu[i-1][j-1]+shu[i-1][j];
        }
    }
    printf("%d",shu[0][0]);
    printf("\n%d %d",shu[1][0],shu[1][1]);
    for(i=2;i<a;++i)
    {
        printf("\n%d ",shu[i][0]);
        for(j=1;j<i;++j)
            printf("%d ",shu[i][j]);
        printf("%d",shu[i][i]);
    }
    return 0;
}
