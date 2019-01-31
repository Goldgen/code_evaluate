#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int i;
	
	for(i=2;i<=sqrt(n);i++)
	if(n%i==0) return 0;
	return 1;
}

int main()
{
	int i,n;
	
	scanf("%d",&n);
	printf("%d",n);
	for(i=2;i<=n/2;i++)
	if(is_prime(i)&&is_prime(n-i)) printf("=%d+%d",i,n-i);
	return 0;
}