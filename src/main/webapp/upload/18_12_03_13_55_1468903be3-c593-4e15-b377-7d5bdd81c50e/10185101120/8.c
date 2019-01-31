#include<stdio.h>
#include<string.h>
int main()
{
	char s[80];
	int i,l;
	gets(s);
	l=strlen(s);
	for (i=0;i<l;i++,--l){
		if (s[i]!=s[l-1]){
			printf ("False");break;
		}
	}
	if (i>=l){
		printf ("True");
	}
}