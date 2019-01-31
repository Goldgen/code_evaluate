#include <stdio.h>
#include <string.h>
char* strmcpy(char* t, char* s, int m)
{
    for(int i = m; i < strlen(s); i++)
        t[i - m] = s[i];
    return t;
}
int main()
{
    char str1[81], str2[81] = {'\0'};
    int m;
    gets(str1);
    scanf("%d", &m);
    puts(strmcpy(str2, str1, m));
}