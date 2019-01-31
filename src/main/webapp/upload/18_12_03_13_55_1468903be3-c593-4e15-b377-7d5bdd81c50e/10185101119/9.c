#include <stdio.h>
#include <string.h>
int main(){
	char s[81]={0},s0[81]={0};
	int times=0,locate=-1;
    gets(s);
    scanf("%s",&s0);
    int len=strlen(s),len0=strlen(s0);
    for(int i=0;i<len;i++){
    	if(s[i]==s0[0]){
    		int same=1;
    		for(int j=1;j<len0;j++){
    			if(s[i+j]==s0[j]){
    				same++;
				}
			}
			if(same==len0){
				times++;
				if(times==1){
					locate=i;
				}
			}
		}
	}
	printf("%s: %d time(s), first at %d",s0,times,locate);
	return 0;
}