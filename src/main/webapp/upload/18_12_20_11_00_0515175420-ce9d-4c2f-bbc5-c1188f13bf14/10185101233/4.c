#include<stdio.h>
#include<string.h>
#include<stdio.h>
void jjj(char *s)
{
    if(*s!='?')
    {
        jjj(s+1);
        putchar(*s);
    }

}
int main()
{
    char s[80];
    gets(s);
    jjj(s);
    return 0;
}