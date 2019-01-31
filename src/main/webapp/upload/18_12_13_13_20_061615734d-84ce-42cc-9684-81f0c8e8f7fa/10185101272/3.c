#include<stdio.h> 
#include<string.h>
char* i2a(char *p,int n){
	char *s;
	if(n/10) s=i2a(p-1,n/10),*p=n%10+'0';
	else *p=n+'0',s=p;
	return s;
}
int main(){
	char s[100]={};
	int n;
	scanf("%d",&n);
	printf("%s",i2a(s+20,n));
	
	return 0;
}