

#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n;
    int m;
    int i,s;
    n=1;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
        n*=i;
    s=n%20181111;
    printf("%d",s);
    return 0;

}