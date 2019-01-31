#include <stdio.h>
#include <string.h>
char* strmcpy(char *v,char *c,int m){
    int num=0;
	while(m){
    	c++;
    	m--;
	}
	while(*c!='\0'){
		*v=*c;
		v++;
		c++;
		num++;
	}
	v-=num;
	return v;	
}
int main(){
	char s1[81]={0},
	     s2[81]={0},
	     *a=s1,
	     *b=s2;
	int n=0;
	fgets(s2,81,stdin);
	scanf("%d",&n);
	printf("%s",strmcpy(a,b,n));
	return 0;
}