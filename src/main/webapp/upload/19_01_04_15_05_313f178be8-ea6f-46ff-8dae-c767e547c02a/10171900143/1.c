#include <stdio.h>

int main(){
	float f;
	scanf("%f",&f);
	long long c=5*(f-32)/9;
	printf("celsius = %lld",c);
	return 0;
}