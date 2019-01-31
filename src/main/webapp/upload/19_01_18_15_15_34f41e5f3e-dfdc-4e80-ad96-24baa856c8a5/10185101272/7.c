#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	while(n){
		if(n%2) sum++;
		n>>=1;
	}
	printf("%d",sum);
	return 0;
} 