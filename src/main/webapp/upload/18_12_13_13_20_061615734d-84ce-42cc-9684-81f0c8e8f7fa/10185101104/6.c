#include <stdio.h>

void rotate(int *p,int n,int m)
{
    int t=n-m;
    if(t>=n)
        t-=n;
    printf("%d",*(p+t));
    for(int i=1;i<n;i++)
    {
        if((++t)>=n)
            t-=n;
        printf(" %d",*(p+t));
    }
}

int main()
{
    int n,m,a[20];
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    rotate(a,n,m);
    return 0;
}
