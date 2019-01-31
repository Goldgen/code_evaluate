#include <stdio.h>
#include <string.h>

char* i2a(char* p,int i);
int main(){
    int i;
    scanf("%d",&i);
    char ch[1000]={0};
    char* p=ch;
    i2a(p,i);
    int l=strlen(p);
    for (int k=l-1;k>=0;k--)
    {
    	printf("%c",*(p+k));
	}
    return 0;
}

char* i2a(char* p,int i){
	if (i==0)
	return p;


	i2a(p+1,i/10);
	*p=i%10+'0';
  
}