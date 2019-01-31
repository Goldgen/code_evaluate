#include<stdio.h>
int main(){
	char ch[10000],a[10000];
	gets(ch);
	int b,i,m;
	scanf("%d",&b);
	m=strlen(ch);
	for(i=0;i<m-b;i++){
		a[i]=ch[b+i];
	}
	printf("%s",a);
	return 0;
}
		
		
	
	
	