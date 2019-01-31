#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *strmcpy(char *t, char *s, int m);

int main()
{
    int m;
    char str[200], result[200];
    gets(str);
    scanf("%d", &m);
    for (int i = 0; i < 200; ++i)
        result[i] = '\0';
    printf("%s", strmcpy(result, str, m));
    return 0;
}

char *strmcpy(char *t, char *s, int m)
{
    char *p = &s[m];
    char *pt = t;
    int lens = strlen(s);
    for ( ; p < s + lens; ++p){
        *pt = *p;
        ++pt;
    }
    return t;
}
