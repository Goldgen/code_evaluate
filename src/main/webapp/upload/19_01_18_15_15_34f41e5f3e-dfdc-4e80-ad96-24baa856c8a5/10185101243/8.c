#include<stdio.h>
int main()
{
    int n,m;
    int a[10];
    scanf("%d%d",&n,&m);
    int s=0;
    while(n) a[++s]=n%10,n/=10;
    m%=s;
    printf("%d ",s);
    for(int i=m;i>=1;i--)
        putchar(a[i]+48);
    for (int i=s;i>m;i--)
        putchar(a[i]+48);
    return 0;
}
