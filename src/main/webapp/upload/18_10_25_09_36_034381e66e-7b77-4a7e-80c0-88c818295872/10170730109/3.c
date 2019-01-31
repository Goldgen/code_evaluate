#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    long long int r=1;
    for (;n>0;n--){
        r*=n;
    }
    printf("%lld",r);
    return 0;
}