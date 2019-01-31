#include <stdio.h>
#include <stdlib.h>
#define P 20181111

int main()
{
    long long n=0;
    
    long long jie=1;
    long long  t = 0;
    scanf("%lld",&n);
	
    for(;n>0;n--)
    {
        jie *= n;
    }
    t = (long long)jie % P;
    printf("%lld",t);
	
    return 0;
}
