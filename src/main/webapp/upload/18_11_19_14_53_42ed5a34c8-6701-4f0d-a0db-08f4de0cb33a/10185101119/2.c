#include <stdio.h>
int fun(int n){
	int a[10]={0},b=0;
	for(int i=0;n>0;i++){
	   a[i]=n%10;
	   n/=10;	
	}
	for(int j=0;j<=9;j++){
		b=b+a[j];
	}
	return b;
}
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",fun(x));
	return 0;
}