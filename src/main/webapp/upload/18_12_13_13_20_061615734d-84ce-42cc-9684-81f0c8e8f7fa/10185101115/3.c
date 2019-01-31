#include <stdio.h>
#include <string.h>

char* i2a(char*,int);

int main()
{
	int n;
	char s[100]={0};
	scanf("%d",&n);
	i2a(s,n);
    return 0;
 } 
 
 char* i2a(char* s,int n)
{
	int count;
	int tmp=n;
	while(tmp){
		tmp=tmp/10;
		count++;
	}
 	for(int i=0;i<count;i++){
 		s[i]=n%10;
 		n=n/10;
	 }
	for(int i=count-1;i>=0;i--){
		printf("%d",s[i]);
	}
 }