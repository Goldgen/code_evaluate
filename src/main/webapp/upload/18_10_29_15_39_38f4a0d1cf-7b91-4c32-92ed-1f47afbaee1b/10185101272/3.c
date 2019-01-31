#include<stdio.h>
const int MAX=1500;
int nu[2000],prime[1500],tot;
void getPrime(){
	nu[0]=nu[1]=1;
	prime[0]=2;
	tot=1;
	int i,j;
	for(i=3;i<MAX;i+=2){
		if(!nu[i]) prime[tot]=i,tot++;
		for(j=0;j<tot&&prime[j]*i<MAX;j++){
			nu[i*prime[j]]=1;
			if(i%prime[j]==0) break;
		}
	}
	
}
int main(){
	int n,i,j;
	getPrime();
	scanf("%d",&n);
	printf("%d",n);
	for(i=0;2*prime[i]<=n;i++)
	for(j=tot-1;prime[i]+prime[j]>=n;j--)
		if(prime[i]+prime[j]==n)
			printf("=%d+%d",prime[i],prime[j]);
	return 0;
} 