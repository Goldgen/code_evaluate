#include<stdio.h>
#include<string.h>
int main()
{
	char str[200],rts[81];
	int i=0,len=0;
	gets(str);	
	len = strlen(str);
	for(i=0;i<len;i++)
		rts[i] = str[len-i-1];
	rts[len]='\0';
	if(strcmp(str,rts) == 0)
		printf("True");
	else
		printf("False");
	return 0;
}
