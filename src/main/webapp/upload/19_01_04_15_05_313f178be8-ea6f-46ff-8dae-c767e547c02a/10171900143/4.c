#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char c;
	int cnt;
}Word;

void cal(Word *,int ,char*);

int main(){
	char str[109];
	gets(str);
	Word a[100];
	int i;
	for(i=0;i<100;i++){
		a[i].c=a[i].cnt=0;
	}
	cal(a,strlen(str),str);
	for(i=0;i<100;i++)
		if(a[i].c!=0 && a[i].c!=' ')
			printf("%c %d; ",a[i].c,a[i].cnt);
		
	
	
		
	return 0;
}
void cal(Word *pa,int len,char* str){
	int i;
	int j;
	for(i=0;i<len;i++){
		if(str[i]==0)continue;
			int ret=0;
			for(j=0;j<100;j++)
				if(pa[j].c==str[i]){
					pa[j].cnt++;
					ret=1;
					break;
				}
			
		if(ret)continue;
				for(j=0;j<len;j++)
					if(pa[j].c==0){
						pa[j].c=str[i];
						pa[j].cnt++;
						break;
					}
		}
	
	
}
