#include <stdio.h>
char* strmcpy(char* t, char* s, int m);

int main()
{
    char s[100] = {'\0'};
    char t[100] = {'\0'};
    int m;

    gets(s);
    scanf("%d",&m);

    strmcpy(t, s, m);

    printf("%s",t);

    return 0;
}

char* strmcpy(char* t, char* s, int m)
{
    int i;
    for (i=0; i<m; i++){
        s++;
    }
    while (*s!='\0') {
        *t = *s;
        t++; s++;
    }
    *t = '\0';
    return NULL;
}
