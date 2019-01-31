#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<=n-1;++i)
        scanf("%d",&a[i]);
    int m,p;
    scanf("%d %d",&m,&p);
    for(int j=n;j>=m+1;--j)
        a[j]=a[j-1];
    a[m]=p;
    for(int i=0;i<n;++i)
        printf("%d ",a[i]);
    printf("%d",a[n]);
}
