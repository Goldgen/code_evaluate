#include <stdio.h>
#include <stdlib.h>

int main()
{
    long int n,m,i,answer;
    while(scanf("%ld",&n)!=EOF)
    {
        m=1;
    for(i=1;i<=n;++i)
    {
        m*=i;
    }
    answer=m%20181111;
    printf("%ld",answer);
    }
    return 0;
}
