#include<stdio.h>
#include<string.h>
long long hex2int(char s[]){
	long long i,l=strlen(s),j,sum=0,base=1;
	for(i=l-1;i>=0;i--){
		if(s[i]>='0'&&s[i]<='9') j=s[i]-'0';
		else if(s[i]>='a'&&s[i]<='f') j=s[i]-'a'+10;
		else if(s[i]>='A'&&s[i]<='F') j=s[i]-'A'+10;
		sum+=j*base;
		base*=16;
	}
	return sum;
}
int main(){
	char s[100]={};
	scanf("%s",s);
	printf("%lld",hex2int(s));
	return 0;
} 