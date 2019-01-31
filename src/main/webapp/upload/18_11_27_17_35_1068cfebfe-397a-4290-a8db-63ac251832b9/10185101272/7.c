#include<stdio.h>
int main(){
	int nu[1000],i,j=-1,n,x;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&nu[i]);
	scanf("%d",&x);
	for(i=0;i<n;i++)
		if(nu[i]==x){
			if(j!=-1) printf(" ");
			printf("%d",i);
			j=1;
			
		}
	if(j==-1){
		printf("ERROR");
		return 0;
	} 
	
	return 0;
} 