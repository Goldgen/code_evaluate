#include <stdio.h>
#include <math.h>

int futode(long long a){
	int arr[100];
	int i = 0;
	int num = 0;
	for(;a>0;i++){
		arr[i] = a%10;
		num+=arr[i]*pow(8,i);
		a /=10;
	}
	return num;
}

int main()
{
	long long n = 0;
	scanf("%lld",&n);
	printf("%d",futode(n));
	return 0;
}
