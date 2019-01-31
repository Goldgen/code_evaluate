#include <stdio.h>

void Bin(int n){
	if (n==1)
	printf("1");
	else{
	Bin(n/2);
    printf("%d",n%2);
    }
}
int main() {
	int n;
	scanf("%d",&n);
	Bin(n);
	return 0;
}