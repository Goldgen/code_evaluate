#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * strfind(char *,char*);

int main(){
	char a[1009];
	char b[1009];
	for(;;){
		scanf("%s",a);
		if(strcmp(a,"#")==0)break;
		scanf("%s",b);
		char *p=strfind(a,b);
		//printf("a=%p,b=%p,p=%p\n",a,b,p);
		if(p==NULL){
			printf("0\n");
		}
		else{
			int cnt=0;
			while(p){
				cnt++;
				p=strfind(p,b);
				
			}
			printf("%d\n",cnt);
		}
		
	}
	
	
	
		
	return 0;
}
char * strfind(char *a,char*b){
	int ret=0;
	char *p=NULL;
	int i,j;
	for(i=0;i<strlen(a);i++){
		if(a[i]==b[0]){
			for(j=0;j<strlen(b);j++){
				if(a[i+j]!=b[j])break;
				if(j==strlen(b)-1){
					ret=1;
					p=&a[i+j+1];
				}
			}
		}
		if(ret)break;
	}

	return p;
}
