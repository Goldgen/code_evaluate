#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long n;
    long long m;
    long long i=1;
    scanf("%lld %lld",&n,&m);
    long long  arr[100];
    for(;n >= 10;i++)
    {
        arr[i-1] = n%10;
        n = n/10;
    }
    arr[i-1] = n%10;
    printf("%lld ",i);
	m = m%i;
    long long k=m-1,j=i-1;
    while(k >= 0)
       {
        printf("%lld",arr[k]);
         k--;
       }
    while(j >= m)
       {
        printf("%lld",arr[j]);
         j --;
       }
    return 0;
}
