#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int n;
    long long N=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        N=N*i;
    }
    printf("%lld",N);

    return 0;
}
