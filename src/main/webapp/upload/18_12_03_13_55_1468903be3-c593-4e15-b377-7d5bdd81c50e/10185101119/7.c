#include <stdio.h>
#include <string.h>
int main(){
    char str[81]={0},reme[81][81]={0};
    int  fommer=-1,latter=-1,word=-1;
	gets(str);
    for(int i=0;i<=strlen(str);i++){
    	if(str[i]==' '||str[i]=='\0'){
    		word++;
    		fommer=latter;
    		latter=i;
    		for(int j=0;j<latter-fommer-1;j++){
    			reme[word][j]=str[fommer+1+j];
			}
		}
	}
	int max=0,putout=0;
	for(int i=0;i<=word;i++){
		if(strlen(reme[i])>max){
		putout=i;
		max=strlen(reme[i]);
	    }
	}
    printf("%s\n",reme[putout]);
	return 0;
}