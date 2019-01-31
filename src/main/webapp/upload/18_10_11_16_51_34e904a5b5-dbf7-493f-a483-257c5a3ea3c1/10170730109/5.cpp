#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int c=0;
    long long d=0LL;
    c=a*(a-1)*(a-2)*(a-3)*(a-4)*(a-5)*(a-6)*(a-7)*(a-8)*(a-9);
    a=20;
    d=c*a*(a-1)*(a-2)*(a-3)*(a-4)*(a-5)*(a-6)*(a-7)*(a-8)*(a-9);
    printf("%d\n%d",c,d);
    return 0;
}

