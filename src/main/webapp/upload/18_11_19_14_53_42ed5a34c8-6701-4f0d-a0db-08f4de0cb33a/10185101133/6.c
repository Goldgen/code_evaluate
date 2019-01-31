#include <stdio.h>
#include <stdlib.h>

unsigned long long fibonacci(int n){
	if(n==0)
		return 0;
    if(n==1 || n==2)
        return 1;
    return fibonacci(n-2)+fibonacci(n-1);
}

int main()
{
	int n;
    scanf("%d",&n);
    printf("%llu\n",fibonacci(n));
    return 0;
}
