#include <stdio.h>



int main(){
	
	int x;
	scanf("%d", &x);
	if(x < 0)
		printf("-1");
	else if(0 == x)
		printf("0");
	else
		printf("1");
	return 0;
}