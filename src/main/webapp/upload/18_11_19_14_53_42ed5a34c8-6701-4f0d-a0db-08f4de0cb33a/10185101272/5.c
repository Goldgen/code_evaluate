#include<stdio.h>
#include<stdlib.h>
int gcd(int a1,int b1){
	int c,a=a1,b=b1;
	if(a<b) c=a,a=b,b=c;
	while(b){
		a%=b;
		if(a<b) c=a,a=b,b=c;
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
	return 0;
} 