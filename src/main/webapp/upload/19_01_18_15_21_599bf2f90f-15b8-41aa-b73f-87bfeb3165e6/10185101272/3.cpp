#include<stdio.h>
#include<stdlib.h>
int main(){
	unsigned long long x,p,n;
	scanf("%llu%llu%llu",&x,&p,&n);

	for(int i=0;i<n;i++){
		x^=1ull<<(unsigned long long)(p-i);
	} 
	/*
	x^=(1<<(p+1))-1;
	x^=(1<<(p-n+1))-1; 
		*/
	printf("%llu",x);
	return 0;
	} 