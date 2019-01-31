#include<stdio.h>
int max(int a,int b){
	return a>b?a:b;
}
int main(){
	int nu[1000],i,j,n,ans=1;
	scanf("%d",&n);
	for(i=0;i<n;i++) scanf("%d",&nu[i]);
	for(i=1,j=1;i<n;i++){
		if(nu[i]==nu[i-1]) j++;
		else j=1;
		ans=max(ans,j);
	}
	printf("%d",ans);
	return 0;
} 