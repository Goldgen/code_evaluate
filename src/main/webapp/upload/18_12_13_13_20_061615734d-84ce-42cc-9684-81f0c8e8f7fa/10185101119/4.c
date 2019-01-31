#include <stdio.h>
int main(){
	int n=0;
	scanf("%d",&n);
	getchar();
	char str[100][51]={0}; 
	for(int i=0;i<n;i++){
		gets(str[i]);
		for(int j=0;str[i][j]!='\0';j++){
			if(str[i][j]=='Z'){
				str[i][j]='A';
			}
			else{
				str[i][j]++;
			}
		}
		printf("case #%d: %s\n",i,str[i]);
	}
	return 0; 
} 