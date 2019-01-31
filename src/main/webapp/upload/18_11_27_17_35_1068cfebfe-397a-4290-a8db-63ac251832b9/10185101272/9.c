#include<stdio.h>
#include<string.h>
int main(){
	char a[1000]={},b[1000]={};
	int c[1000]={},i,la,lb,l;
	scanf("%s %s",a,b);
	la=strlen(a);
	lb=strlen(b);
	l=la>lb?la:lb;
	for(i=0;i<l;i++){
		if(la>i) c[i]+=a[la-i-1]-'0';
		if(lb>i) c[i]+=b[lb-i-1]-'0';
		if(c[i]/10) c[i+1]++,c[i]%=10;
	}
	if(!c[i]) i--;
	while(i>=0) printf("%d",c[i--]);
	return 0;
} 