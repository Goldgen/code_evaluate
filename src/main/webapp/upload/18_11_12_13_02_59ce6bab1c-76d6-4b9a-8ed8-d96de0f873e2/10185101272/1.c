#include<stdio.h>
#include<stdlib.h> 
void printl(int n){
	int i;
	for(i=1;i<=n;i++)
		printf(" %d * %d =%3d",i,n,i*n);
}
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printl(i);
		if(i<n) printf("\n");
	}
		
	return 0;
}