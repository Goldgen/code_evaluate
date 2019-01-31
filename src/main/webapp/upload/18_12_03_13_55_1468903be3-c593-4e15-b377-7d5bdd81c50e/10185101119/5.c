#include <stdio.h>
#include <string.h>
int main(){
    char s1[1000]={0},s2[1000]={0};
    int same=0;
    scanf("%s %s",&s1,&s2);
    if(strlen(s1)!=strlen(s2)){
    	printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
	    return 0;
	}
    int len=strlen(s2);
    for(int i=0;i<len;i++){
    	if(s1[0]==s2[i]){
    		same++;
    		for(int j=i+1;j<len;j++){
    			if(s1[j-i]==s2[j])
                same++;
            }
            for(int j=0;j<i;j++){
            	if(s1[len-i+j]==s2[j])
            	same++;
			}
			if(same==len){
				printf("\"%s\" is a rotation of \"%s\"",s1,s2);
				return 0;
			}
			same=0;
		}
	}
	printf("\"%s\" is NOT a rotation of \"%s\"",s1,s2);
	return 0;
}