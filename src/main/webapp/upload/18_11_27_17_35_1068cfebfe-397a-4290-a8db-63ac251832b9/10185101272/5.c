#include<stdio.h>
int main(){
	int nu[1000],i,j,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&nu[i]);
	scanf("%d%d",&j,&x);
	for(i=n;i>j;i--) nu[i]=nu[i-1];
	nu[j]=x;
	for(i=0;i<=n;i++){
		printf("%d",nu[i]);
		if(i<n) printf(" ");
	} 
	return 0;
} 