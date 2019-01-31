#include <stdio.h>
#include <stdlib.h>
long result(long x)
{
    scanf("%ld",&x);
    if(x>0)
    {
        result(x);
        printf("%ld ",x);
    }
}
int main()
{
    long n;
    scanf("%ld",&n);
    result(n);
    printf("%ld",n);
    return 0;
}
