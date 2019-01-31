#include <stdio.h>

unsigned long long Func(unsigned long long num){
	if (num>0)
	{
		return num%10+Func(num/10);
	}
}

int main(){
	unsigned long long n;
	scanf("%llu",&n);
	printf("%llu",Func(n));
	
}