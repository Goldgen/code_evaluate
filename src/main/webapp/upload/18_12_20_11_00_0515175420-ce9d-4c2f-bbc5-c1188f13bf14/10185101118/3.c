#include<stdio.h>
int g=1,*s,*d,h=1,t;
int Min (int *p, int n)
{
    if (g)
    {
        t=*p;
        s=p;
        g=0;
    }
    if (s>p+n-1)
        return t;
    t=*s>t?t:*s;
    s++;
    return Min(p,n);
}
int Sum (int *p, int n)
{
    static int s=0;
    if (h)
    {
        d=p;
        h=0;
    }
    if (d>p+n-1) return s;
    return s+*(++d-1)+Sum(p,n);
}
int main()
{
    int n,a[101],*p=a;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("%d %d",Min(p,n),Sum(p,n));
    return 0;
}

