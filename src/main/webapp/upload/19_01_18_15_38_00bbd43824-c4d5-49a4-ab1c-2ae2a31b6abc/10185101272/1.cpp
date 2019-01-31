#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",max(a,b));
	return 0;
}