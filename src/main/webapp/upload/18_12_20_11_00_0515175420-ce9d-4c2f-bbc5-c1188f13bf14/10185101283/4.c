#include <stdio.h>
void f(char *s)
{
	if(*s!='?')
    {
        f(s+1);
       printf("%c",*s);
    }
    return ;
}
int main()
{
	char s[100];
	gets(s);
	f(s);
	return 0;
}