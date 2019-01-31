#include <stdio.h>
#include <string.h>
char* strmcpy(char a[], char b[], int n); 
int main()
{
	char s[81],t[81];
	int m=0; 
	gets(s);
	scanf("%d",&m);
	strmcpy(s,t,m);
	puts(t);
	return 0;
}
char* strmcpy(char a[], char b[], int n)
{
	int i = 0, j = 0, len = 0;
	len = strlen(a);
	for(i = n; i <len ; i ++)
	{
		b[j] = a[i];
		j++;
	}
	b[j] = '\0';
	return b;
}
