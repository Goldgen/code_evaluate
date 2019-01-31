#include <stdio.h>

int main()
{
    int n;
    long long int product=1;
    scanf("%d",&n);
    while(n>0)
    {
        product*=n;
        n--;
    }
    printf("%lld",product);
    return 0;
}
