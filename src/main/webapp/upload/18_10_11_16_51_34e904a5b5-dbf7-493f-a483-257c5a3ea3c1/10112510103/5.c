#include <stdio.h>

int main()
{
    int sum1 = 1;
    int count;

    for(count = 1 ; count <= 10 ; ++count)
        sum1 = sum1 * count;

    printf("%d\n",sum1);

    long long sum2 = 1;

    for(count = 1 ; count <= 20 ; ++count)
        sum2 = sum2 * count;

    printf("%lld",sum2);

    return 0;
}