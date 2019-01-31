#include<stdio.h>

int main(void)
{
	int n=0;
	long long int N=1;
	scanf("%d",&n);
	while(n>=1){
		N*=n;
		n--;
		
	}
	printf("%lld",N);
	return 0;
}