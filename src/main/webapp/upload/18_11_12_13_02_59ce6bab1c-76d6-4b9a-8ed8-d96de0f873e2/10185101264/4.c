#include <stdio.h>
#include <math.h>
int decimal(long long a){
	long long sum = 0, i = 0;

	while(a != 0){
		sum += pow(8, i) * (a % 10);
		a /= 10;
		i++;
	}

	printf("%lld", sum);
}
int main(){
	long long a;
	scanf("%lld", &a);
	decimal(a);
}