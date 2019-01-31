#include<stdio.h> 
#include<string.h>
void Number2Alpha(int num, char* mptr){
	char table[15][20]={"January","February","March","April",
					"May","June","July","August","September",
							"October","November","December"};
	int i,l=strlen(table[num]);
	for(i=0;i<l;i++)
		mptr[i]=table[num][i];
}
int main(){
	char s[100]={};
	int num;
	scanf("%d",&num);
	Number2Alpha(num-1,s);
	printf("%s",s);
	
	return 0;
}