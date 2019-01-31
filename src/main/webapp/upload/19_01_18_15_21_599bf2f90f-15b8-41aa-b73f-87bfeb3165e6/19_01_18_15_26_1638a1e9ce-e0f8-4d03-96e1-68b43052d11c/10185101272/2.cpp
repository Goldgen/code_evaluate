#include<stdio.h>
#include<stdlib.h>
int main(){
	unsigned int x,p,n,i,j,sum=0;
	scanf("%u%u%u",&x,&p,&n);
	x>>=p-n+1;
	for(i=0,j=1;i<n;i++){
		if(x%2) sum+=j;
		x>>=1;
		j<<=1;
	}
	printf("%u",sum);
	return 0;
} 