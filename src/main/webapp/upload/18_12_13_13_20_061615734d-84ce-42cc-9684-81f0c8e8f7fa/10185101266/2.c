#include <stdio.h>
#include <string.h>
char*strmcpy(char*a, char*b, int c)
{
    for(int i = c; i < strlen(b); i++)
        a[i - c] = b[i];
    return a;
}

int main()
{
    char str1[81], str2[81] = {'\0'};
    int c;
    gets(str1);
    scanf("%d", &c);
    puts(strmcpy(str2, str1, c));
}