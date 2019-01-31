#include <stdio.h>
#include <stdlib.h>
int sgn(int x){
	if(x>0) return 1;
	else if(!x) return 0;
	return -1;
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",sgn(x));
	return 0;
}