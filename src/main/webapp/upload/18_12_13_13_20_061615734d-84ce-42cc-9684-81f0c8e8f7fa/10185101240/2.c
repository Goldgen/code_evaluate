#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char input[100];
	gets(input);
    char *s=input;
	unsigned int m;
	scanf("%u",&m);
	char t[100];
	int n,i;
	n=strlen(input);
	for(i=0;i<n;i++,m++)
	{
		t[i]=*(s+m);
	}
	t[i]='\0';
	printf("%s",t);
	return 0;
	
}