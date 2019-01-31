#include <stdio.h>
void rotate(int* p, int n, int m)
{
    int temp = *p;
    int i;
    for(i=n-1;i>=0;i--)
    {
        int x=(1+i)%n;
        *(p+x)=*(p+i);
    }
    *(p+1) =temp;
}
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        rotate(a,n,m);
    }
    for(i=0;i<n;i++)
    {
        if(i!=n-1) printf("%d ",a[i]);
        else printf("%d",a[i]);
    }
    return 0;
}