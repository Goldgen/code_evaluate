#include<stdio.h>
#include<stdlib.h>
int nu[100000];
int main(){
	int i=0,a;
	while(~scanf("%d",&a)){
		if(a<=0) break;
			nu[i]=a;
			i++;
	}
	i--;
	while(i>=0){
		printf("%d",nu[i]);
		if(i) printf(" ");
		i--;
	}
	return 0;
} 