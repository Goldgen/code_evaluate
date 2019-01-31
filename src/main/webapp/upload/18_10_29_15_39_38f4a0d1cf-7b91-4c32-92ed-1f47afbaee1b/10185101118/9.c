#include<stdio.h>
int main()
{
    int n,i,v;
    scanf("%d",&n);
    int a[n][n];
    a[0][0]=a[1][0]=a[1][1]=1;
    if(2==n)printf("%d\n%d %d",a[0][0],a[1][0],a[1][1]);
    else
    {
        for(i=0;i<=n-1;i++)
            for(v=0;v<=i;v++)
            {
                if(0==v&&i!=0)
                {
                    a[i][v]=1;
                    printf("%d ",a[i][v]);
                }
                else if(i==v)
                {
                    a[i][v]=1;
                    printf("%d",a[i][v]);
                    if(i!=n-1)printf("\n");
                }
                else
                {
                    a[i][v]=a[i-1][v-1]+a[i-1][v];
                    printf("%d ",a[i][v]);
                }
            }
    }
    return 0;
}
