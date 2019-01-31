#include<stdio.h>
int main(void)
{
	unsigned long long N,n=1,s=1;
	scanf("%llu",&N);
	

    while(n<=N)
	{
		s=n*s;
		n=n+1;
	}

	printf("%llu",s);
    return 0;
}