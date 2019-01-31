#include <stdio.h>
#include <string.h>
int main()
{
	char str[1000] = {'\0'}, str1[1000] = {'\0'};
	gets(str);
	int n = strlen(str);
	str[n - 1] = '\0';
	n = strlen(str);
	for(int i = 0; i < n; i++)
		str1[n - 1 - i] = str[i];
	for(int i = 0; i < n; i++)
		str[i] = str1[i];
	puts(str1);
}
