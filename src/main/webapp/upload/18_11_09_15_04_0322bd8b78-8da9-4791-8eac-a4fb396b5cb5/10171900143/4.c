#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long t=1;
    for(int i=2;i<=n;i++){
        t*=i;
        if(t>20181111)t%=20181111;
    }
    t%=20181111;
    printf("%lld",t);
    return 0;
}

