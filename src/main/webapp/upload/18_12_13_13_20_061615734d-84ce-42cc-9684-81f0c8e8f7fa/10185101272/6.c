#include<stdio.h> 
#include<string.h>
void rotate(int* p, int n, int m){
	int nu[100]={},i;
	for(i=0;i+m<n;i++) nu[i+m]=p[i];
	for(i=0;i<m;i++) nu[i]=p[n-m+i];
	for(i=0;i<n;i++) p[i]=nu[i];
}
int main(){
	int nu[20]={},i,m,n;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++) scanf("%d",&nu[i]);
	rotate(nu,n,m);
	for(i=0;i<n-1;i++) printf("%d ",nu[i]);
	printf("%d",nu[i]);
	
	return 0;
}