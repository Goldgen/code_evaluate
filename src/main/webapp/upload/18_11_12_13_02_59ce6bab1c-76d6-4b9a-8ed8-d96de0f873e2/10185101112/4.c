#include <stdio.h>
#include <math.h> 

int main() {
	long long i=1,sum=0,num,k,a,q;
	long double p;
	scanf("%lld",&num);
	k=(long long)log10(num)+1;
    for (;i<=k;i++){
    	a=num%10;
    	p=pow(8,(long double)(i-1));
    	q=(long long)p;
    	sum=sum+a*q;
    	num=num/10;
	}
    printf("%lld",sum);
	return 0;
}
