#include<stdio.h>
int main()
{
    int n,c,t=0;
    scanf("%d",&n);
    int a[n],g[n];
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&c);
    for (int v=0; v<n; v++)
        if (a[v]==c)
            g[t++]=v;
    if (t)
    {
        for (int v=0; v<t-1; v++)
            printf("%d ",g[v]);
        printf("%d",g[t-1]);
    }
    else printf("ERROR");
    return 0;
}
