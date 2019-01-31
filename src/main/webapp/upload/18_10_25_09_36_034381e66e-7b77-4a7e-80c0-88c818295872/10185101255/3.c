#include <stdio.h>

int main()
{
    unsigned int n,i=0;
    unsigned long long number=1;
    scanf("%d",&n);
    
    for (i=1; i<=n; i++)
    {
        number*=i;
    }
    printf("%lld",number);
    
    return 0;
    
    
}
