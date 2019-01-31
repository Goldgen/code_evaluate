#include<stdio.h>
#include<string.h>
int main(){
	char nu[100]={};
	int m,i,a;
	scanf("%s %d",nu,&m);
	a=strlen(nu);
	printf("%d ",a);
	if(m>=a) m%=a;
	for(i=a-m;i<a;i++)
		printf("%c",nu[i]);
	for(i=0;i<a-m;i++)
		printf("%c",nu[i]);
	return 0;
} 