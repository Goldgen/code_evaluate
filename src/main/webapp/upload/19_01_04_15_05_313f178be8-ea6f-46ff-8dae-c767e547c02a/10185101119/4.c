#include <stdio.h>
#include <string.h>
int main(){
    char str[200]={0},s[200]={0};
    int num[100]={0},n=0;
    gets(str);
    for(int i=0;i<strlen(str);i++){
    	if(str[i]==' '){
    		continue;
		} 
    	int ifnew=1;
    	for(int j=0;j<n;j++){
    		if(str[i]==s[j]){
    			ifnew=0;
    			num[j]++;
    			break;
			}
		}
		if(ifnew==1){
			s[n]=str[i];
			num[n]++;
			n++;
		}
	}
	for(int i=0;i<n;i++){
		printf("%c %d; ",s[i],num[i]);
	}
	return 0;
}  