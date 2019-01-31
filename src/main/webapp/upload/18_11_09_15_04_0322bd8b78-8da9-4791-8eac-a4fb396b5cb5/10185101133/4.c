#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    long long sum=1;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        sum*=i;
        i++;
    }
    printf("%lld",sum%20181111);
    return 0;
}
