#include <stdio.h>
#include <string.h>
void fun(char *s)
{
    char t;
    if(*s !='?')
    {
        t=*s++;
        fun(s);
        if(t!='?') printf("%c",t);
    }
}

int main()
{
    char *a;
	char str[1000];
	a=str;
    gets(a);
    fun(a);
}