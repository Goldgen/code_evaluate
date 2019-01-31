#include <stdio.h>

int Fibonaci(int n){
	if (n == 0)
		return 0;
	return (n == 1 || n == 2)?1:Fibonaci(n - 1)+Fibonaci(n - 2);
}

int main(void){
	int n;
	scanf("%d",&n);
	printf("%d\n",Fibonaci(n));
	return 0;
}