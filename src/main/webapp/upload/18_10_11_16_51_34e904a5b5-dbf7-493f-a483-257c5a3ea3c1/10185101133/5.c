#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=10;
    int sum1=1;
    for(;n>0;n--){
        sum1 = sum1 * n;

    }

    long long sum2=1;
    int i=20;
    for(;i>0;i--){
        sum2 = sum2 * i;

    }
    printf("%d\n%lld",sum1,sum2);

    return 0;
}
