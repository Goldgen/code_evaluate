#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[85];
    char s[85];
    gets(str);
    int len = strlen(str);
    s[len] = '\0';
    for(int i = 0;i <= len-1;i++)
    {
        s[len-1-i] = str[i];
    }
    if(strcmp(str,s) == 0)
        printf("True");
    else
        printf("False");
    return 0;
}
