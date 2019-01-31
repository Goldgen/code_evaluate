#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a[t+1];
    for(int x=0;x<t;x++)
        scanf("%d",&a[x]);
    int m,n;
    scanf("%d %d",&m,&n);
    for(int x=t+1;x>m;x--)
        a[x]=a[x-1];
    a[m]=n;
    for(int x=0;x<t+1;x++)
    {
        printf("%d",a[x]);
        if(x<t)
            printf(" ");
    }
    return 0;
}