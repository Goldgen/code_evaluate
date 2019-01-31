#include <stdio.h>
#include <math.h>
long long eight(long long n){
	long long N=0;
	for(int a=0,i=0;n>0;i++){
		a=n%10;
		n/=10;
		N+=a*pow(8,i);
	}
	return N;
}
int main(){
	long long x;
	scanf("%lld",&x);
	printf("%lld",eight(x));
	return 0;
}