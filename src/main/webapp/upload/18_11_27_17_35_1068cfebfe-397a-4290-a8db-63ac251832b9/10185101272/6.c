#include<stdio.h>
int main(){
	int nu[1000],i,j=-1,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&nu[i]);
	scanf("%d",&x);
	for(i=0;i<n;i++)
		if(nu[i]==x){
			j=i;
			break;
		}
	if(j==-1){
		printf("ERROR");
		return 0;
	} 
	x=0;
	for(i=0;i<n;i++){
		if(i==j) continue;
		if(x)printf(" ");
		x=1;
		printf("%d",nu[i]);
	} 
	return 0;
} 