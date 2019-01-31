#include<stdio.h>
int main()
{
	long long int a=1;
	int i,n;
	scanf("%d",&n);
	
	for (i=1;i<=n;i++){
		a=a*i;
		
	}
	printf("%lld",a);
}