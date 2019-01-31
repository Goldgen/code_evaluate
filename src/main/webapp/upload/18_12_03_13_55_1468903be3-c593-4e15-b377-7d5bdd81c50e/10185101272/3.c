#include<stdio.h>
#include<string.h>

int main(){
	char a[100]={},b[100]={};
	int i,l,la,lb;
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	l=la>lb?la:lb;
	
	for(i=0;i<l;i++){
		if(i<la) printf("%c",a[i]);
		if(i<lb) printf("%c",b[i]);
	}
	
	return 0;
} 