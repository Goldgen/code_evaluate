#include<stdio.h> 
#include<string.h>
char* fos(char *p){
	int l=strlen(p),i=0;
	for(i=0;i<l;i++)
		if(p[i]<'Z') p[i]++;
		else p[i]='A';
		return p;
}
int main(){
	char s[100]={};
	int i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%s",s);
		printf("case #%d: %s\n",i,fos(s));
	}
	
	return 0;
}