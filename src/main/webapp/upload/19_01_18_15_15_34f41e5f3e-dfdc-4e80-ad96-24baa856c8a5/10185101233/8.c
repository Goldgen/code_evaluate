#include <stdio.h>
#include <math.h>
int main()

{
    long long n;
    int m;
    int v = 0;
    int i = 1;
    int j = 1;
    long long s;
    scanf("%d %d",&n,&m);
    int x = n;
    while(x!=0)
    {
        x=x/10;
        v++;
    }
    m = m%v;
    for(;i<=m;i++)
    {
        s=n%10;
        n=n/10;
        for(j=1;j<v;j++)
            s=s*10;
        n=n+s;
    }
    printf("%d %ld",v,n);
}
