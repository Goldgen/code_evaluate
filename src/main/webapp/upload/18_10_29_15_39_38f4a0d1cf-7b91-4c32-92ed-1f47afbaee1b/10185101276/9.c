#include <stdio.h>
int main()
{
    int n=0,i=0,e=0;
    scanf("%d",&n);
    int a[100][100]={0};
    for(i=0;i<n;i++)
    a[i][0]=1;
    for(i=0;i<n-1;i++)
    {
        for(e=0;e<n-1;e++)
        a[i+1][e+1]=a[i][e]+a[i][e+1];
    }
    for(i=0;i<n;i++)
    {
        for(e=0;e<=i;e++)
        {
            if(e==i&&i!=n-1)
            printf("%d\n",a[i][e]);
            else if(i==n-1&&e==i)printf("%d",a[i][e]);
            else printf("%d ",a[i][e]);
        }
    }
    return 0;
}
