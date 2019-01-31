#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    for (int i=n-1; i>0; i--)
        for (int v=0; v<i; v++)
        {
            if (a[v]>a[v+1])
            {
                t=a[v];
                a[v]=a[v+1];
                a[v+1]=t;
            }
        }
    for (int i=0; i<n-1; i++)
        printf("%d ",a[i]);
    printf("%d",a[n-1]);
    return 0;
}
