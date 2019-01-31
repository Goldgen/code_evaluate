#include <stdio.h>
#include <string.h>
int main(){
    char str[2000]={0},s[2000]={0};
    while(1){
    	scanf("%s",str);
    	if(strcmp(str,"#")==0)
    	    break;
    	scanf("%s",s);
    	int n=0,len=strlen(str),need=strlen(s);
    	for(int i=0;i<len;i++){
    		if(str[i]==s[0]){
    			int thesame=0;
    			for(int j=i;j<i+need;j++){
    				if(str[j]==s[j-i]){
    					thesame++;
					}
				}
				if(thesame==need){
					n++;
					i+=need-1;
				}
			}
		}
		printf("%d\n",n);
	}
	return 0;
} 