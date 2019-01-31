#include <stdio.h>
#include <stdlib.h>

void rotate(int* p, int n, int m)
{
    int p1[n];
    for(int i=0;i<m;++i)
    {
        p1[m-1-i]=p[n-1-i];
    }
    for(int i=0;i<n-m;++i)
    {
        p1[m+i]=p[i];
    }
    for(int i=0;i<n;++i)
    {
        if(i==n-1)
            printf("%d",p1[i]);
        else
            printf("%d ",p1[i]);
    }
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int p[n];
    for(int i=0;i<n;++i)
    {
        if(i==n-1)
            scanf("%d",&p[i]);
        else
            scanf("%d ",&p[i]);
    }
    rotate(p,n,m);
    return 0;
}
