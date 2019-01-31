#include <stdio.h>
#include <string.h>
#include <math.h>
void hexint(char ch[],int len){
	long long hex=0;
	for(int i=0;i<len;i++){
		switch(ch[i]){
			case'A':case'B':case'C':case'D':case'E':case'F':
				ch[i]-=55;break;
			case'a':case'b':case'c':case'd':case'e':case'f':
				ch[i]-=87;break;
			default:
			    ch[i]-=48;break;	
		}
		hex+=ch[i]*pow(16,len-i-1);
	}
	printf("%lld",hex);
}
int main(){
	char num[9]={0};
	scanf("%s",&num);
	hexint(num,strlen(num));
	return 0;
}