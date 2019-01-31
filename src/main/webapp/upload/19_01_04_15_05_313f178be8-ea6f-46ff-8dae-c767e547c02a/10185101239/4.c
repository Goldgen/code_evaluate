#include <stdio.h>
#include <string.h>

int main(){
char str[100],a[100];
	gets(str);
int i,b=1;
char k;
	for(i=0;i!='\0';i++){
		while(str[i]!=' '){
			a[i]=str[i];
			k=a[i];
		}
		if(str[i]==k){
			b++;
			printf("%c %d; ",k,b);
		}
	}
	return 0;}
		