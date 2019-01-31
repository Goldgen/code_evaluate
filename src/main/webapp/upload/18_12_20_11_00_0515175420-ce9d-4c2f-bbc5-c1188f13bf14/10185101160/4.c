#include <stdio.h>
#include <string.h>
void reverse(char *a);
int main()
{
	char str[1000];
	reverse(str);
	return 0;
}
void reverse(char *a)
{
	*a = getchar();
	if(*a != '?')
	{
		reverse(a+1);	
		putchar(*a);
	}
}