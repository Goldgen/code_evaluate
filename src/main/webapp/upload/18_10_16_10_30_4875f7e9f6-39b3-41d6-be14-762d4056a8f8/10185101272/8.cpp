#include <stdio.h>
#include <stdlib.h>
int max(int a,int b){
	if(a>b) return a;
	return b;
}
int min(int a,int b){
	if(a>b) return b;
	return a;
}
int main(){
	int a,b,c,maxn,minn;
	scanf("%d%d%d",&a,&b,&c);
	maxn=max(a,b);
	maxn=max(maxn,c);
	minn=min(a,b);
	minn=min(minn,c);
	printf("%d",a+b+c-maxn-minn);
	return 0;
}