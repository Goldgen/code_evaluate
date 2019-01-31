#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int main(){
	int a,b;
	scanf("%d",&a);
	while(~scanf("%d",&b))
		a=max(a,b);
	printf("%d",a);
	return 0;
}