#include<stdio.h>
#include<stdlib.h>
void f(int a){
	if(a<2) printf("%d",a);
	else{
		f(a/2);
		printf("%d",a%2);
	}
	
}
int main(){
	int n;
	scanf("%d",&n);
	f(n);
	return 0;
} 