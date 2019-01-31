#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,x,y,j,k;
    scanf("%d",&n);
    int num[n+1];
    for(i=0;i<n;i++)
    {
        if(i!=n-1)
            scanf("%d ",&num[i]);
        else
            scanf("%d",&num[i]);
    }
    scanf("%d %d",&x,&y);
    for(j=n;j>=x;j--)
    {
        num[j+1]=num[j];
    }
    num[x]=y;
    for(k=0;k<=n;k++)
    {
        if(k==n)
            printf("%d",num[n]);
        else
            printf("%d ",num[k]);
    }
    return 0;
}
