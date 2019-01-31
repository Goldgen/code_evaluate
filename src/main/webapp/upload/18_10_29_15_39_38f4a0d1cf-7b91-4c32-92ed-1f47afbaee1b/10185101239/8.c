#include<stdio.h>
int main()
{
    int n,m,a,s=0;
    scanf("%d %d",&n,&m);
    while(n)
    {
        s++;
        n/=10;
    }
    a=n>>m;
    printf("%d %d",s,a);
    return 0;
}
