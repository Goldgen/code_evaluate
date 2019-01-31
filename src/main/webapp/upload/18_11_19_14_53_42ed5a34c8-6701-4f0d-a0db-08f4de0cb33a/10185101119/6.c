#include <stdio.h>
int fibonacci(int n){
	if(n==1||n==2)
	return 1;
	else if(n==0)
    return 0;
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
	int x=0;
	scanf("%d",&x);
	printf("%d",fibonacci(x));
	return 0;
}