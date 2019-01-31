#include<stdio.h>
#include<string.h>

int i;
int main()
{
	char a[100],b[100];
	int len=0;
	gets(a);
	len = strlen(a);
	for(i=0;i<len;i++)
		b[i] = a[len-i-1];
	b[len]='\0';
	if(strcmp(a,b) == 0)
		printf("True");
	else
		printf("False");
	return 0;
}
