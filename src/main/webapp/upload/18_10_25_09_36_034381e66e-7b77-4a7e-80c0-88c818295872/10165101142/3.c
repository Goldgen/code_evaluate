#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,n;
    long long int sum=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("%lld",sum);
    return 0;
}


