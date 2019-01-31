#include <stdio.h>

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int main(int argc, char* argv[]){

	int a, b;
	scanf("%d%d", &a, &b);
	printf("最大公约数是: %d", gcd(a, b));
}