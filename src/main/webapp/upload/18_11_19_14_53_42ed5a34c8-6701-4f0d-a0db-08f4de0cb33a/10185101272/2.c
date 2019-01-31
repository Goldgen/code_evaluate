#include<stdio.h>
#include<stdlib.h>
int count(int a){
	if(a<10) return a;
	return a%10+count(a/10);
}
int main(){
	int a;
	scanf("%d",&a);
	printf("%d",count(a));
	return 0;
} 