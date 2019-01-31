#include <stdio.h>
#include <stdlib.h>
void rotate(int* p, int n, int m)
{
    int *q[n];int i,j;
    int k=n-m;
    for(i=0;i<m;++i)
    {
        q[i]=p[k];
        ++k;
    }
    for(j=0;j<n-m;++j)
    {
        q[i]=p[j];
        ++i;
    }
    for(int l=0;l<n;++l)
    {
        p[l]=q[l];
    }

}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int *p[n];
    for(int i=0;i<n;++i)
        scanf("%d",&p[i]);
    rotate(p,n,m);
    for(int i=0;i<n-1;++i)
        printf("%d ",p[i]);
        printf("%d",p[n-1]);
}
