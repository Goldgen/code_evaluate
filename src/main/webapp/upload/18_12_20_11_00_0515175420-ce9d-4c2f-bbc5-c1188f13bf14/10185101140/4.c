#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Con_Output(char *p);

int main()
{
    char ch[10000] = {'\0'};
    gets(ch);
    char *p = ch;

    Con_Output(p);

    return 0;
}

void Con_Output(char *p)
{
    if (*p=='?')
        return;

    int len = strlen(p);
    if (len>1)
    {
        Con_Output(p+1);
        printf("%c",*p);
        p[len-1] = '?';
    }
}
