#include <stdio.h>
#include <stdlib.h>


long long int fibonacci(int n)
{
    if((n==1)||(n==2))
        return 1;
	else if(n==0)
		return 0;
	

        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    long long int a;
    scanf("%lld",&a);
    printf("%lld",fibonacci(a));
    return 0;
}
