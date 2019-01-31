#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i;
    long long int sum=1;
    for(i=1;i<=10;i++) sum*=i;
    printf("%lld\n",sum);
    for(;i<=20;i++) sum*=i;
    printf("%lld",sum);
    return 0;
}
