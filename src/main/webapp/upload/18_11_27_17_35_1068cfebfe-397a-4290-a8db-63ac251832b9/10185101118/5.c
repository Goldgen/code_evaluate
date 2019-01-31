#include<stdio.h>
int main()
{
    int n,c,d;
    scanf("%d",&n);
    int a[n+1];
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d %d",&c,&d);
    for (int i=n; i>=0; i--)
    {
        if (i>c) a[i]=a[i-1];
        else if (i==c) a[i]=d;
    }
    for (int i=0; i<n; i++)
        printf("%d ",a[i]);
    printf("%d",a[n]);
    return 0;
}
