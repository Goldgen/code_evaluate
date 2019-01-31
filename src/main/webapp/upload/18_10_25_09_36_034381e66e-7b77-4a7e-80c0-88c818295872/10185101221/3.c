#include <stdio.h>
#include <stdlib.h>
/*写程序求解N的阶乘，n!*/


int main()
{
    int n = 0;
    long long factorial = 1;
    scanf("%d",&n);
    for (; n >= 1; n--)
        factorial *= n;
    printf("%lld",factorial);
    return 0;
}
