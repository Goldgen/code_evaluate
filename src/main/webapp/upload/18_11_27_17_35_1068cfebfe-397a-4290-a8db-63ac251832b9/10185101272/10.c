#include<stdio.h>
#include<string.h>

int main(){
	int nu[1000]={},n,i,j,x;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&nu[i]);
	
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++){
		if(nu[i]>nu[j]) {
			x=nu[i];
			nu[i]=nu[j];
			nu[j]=x;
		}
	}
	
	for(i=0;i<n-1;i++) printf("%d ",nu[i]);
	printf("%d",nu[i]);
	return 0;
} 