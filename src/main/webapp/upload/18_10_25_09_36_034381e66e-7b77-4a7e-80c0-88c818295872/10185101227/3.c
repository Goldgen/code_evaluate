#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int n,i;
    long long s;
    scanf("%d",&n);
    i=1;s=1;
    while (i<=n)
    {s=(long long)s*i;
    ++i;}
    printf("%lld",s);
    return 0;
}
