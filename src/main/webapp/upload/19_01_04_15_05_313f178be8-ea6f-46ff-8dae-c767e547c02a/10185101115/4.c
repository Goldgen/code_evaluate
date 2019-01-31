#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    int l=strlen(str);
	char str1[l];
    str[l]='\0';
    int num[l]={0};
    int i=0;
    int j=1;
    int count=0;
    for(;i<l;i++){
	if((str[i]!=' ')){
    	str1[i]=str[i];
    }
    for(;j<l-i;j++){
    	if(str1[i]==str[i+j]){
    		num[i]++;
			}
		}
		printf("%c %d; ",str1[i],num[i]);
		} 
	int k=0;	
	for(;k<l;k++){
		printf("%c %d; ",str1[k],num[k]);
	} 

	return 0; 
 } 