#include<stdio.h>
#include<string.h>
int main()
{
    int n,m,a[11],*p;
    scanf("%d %d",&n,&m);
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    p=a+n-m;
    for (int i=0; i<m; i++)
        printf("%d ",*p++);
    p=a;
    for (int v=0; v<n-m-1; v++)
        printf("%d ",*p++);
    printf("%d",*p);
    return 0;
}
