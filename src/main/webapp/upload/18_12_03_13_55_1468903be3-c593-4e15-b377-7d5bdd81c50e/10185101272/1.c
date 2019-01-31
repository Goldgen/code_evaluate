#include<stdio.h>
#include<string.h>
void print(char a){
	if(a<='C'&&a>='A')
			printf("2");
		else if(a<='F')
			printf("3");
		else if(a<='I')
			printf("4");
		else if(a<='L')
			printf("5");
		else if(a<='O')
			printf("6");
		else if(a<='S')
			printf("7");
		else if(a<='V')
			printf("8");
		else if(a<='Z')
			printf("9");
}
int main(){
	char str[100]={};
	scanf("%s",str);
	int i,l;
	l=strlen(str);
	for(i=0;i<l;i++)
		if(str[i]<='z'&&str[i]>='a')
			str[i]+='A'-'a';
	
	for(i=0;i<l;i++)
		if(str[i]>='A'&&str[i]<='Z')print(str[i]);
	
} 