#include<cstdio>
#include<iostream>
using namespace std;
int gcd(int a,int b){
	if(a<b) swap(a,b);
	while(b){
		a%=b;
		if(a<b) swap(a,b);
	}
	return a;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("最大公约数是: %d",gcd(a,b));
	return 0;}