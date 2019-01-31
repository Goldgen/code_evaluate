#include<stdio.h>
int main()
{
    int n,c,b=0,i;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&c);
    if (1==n && c==a[0]) printf("");
    else
    {
        for (i=0; i<n; i++)
        {
            if (0==b && c==a[i])
                b=1;
            if (1==b && i!=n-1) a[i]=a[i+1];
        }
        if (0==b) printf("ERROR");
        else
        {
            for (int v=0; v<n-2; v++)
                printf("%d ",a[v]);
            printf("%d",a[n-2]);
        }
    }
    return 0;
}
