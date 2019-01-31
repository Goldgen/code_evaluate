#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* strmcpy(char* t, char* s, int m);
int main()
{
    char t[81];
    char s[81];
    int m;
    gets(s);
    scanf("%d",&m);
    puts(strmcpy(t,s,m));
}
char* strmcpy(char* t, char* s, int m){
     char *p=t;
    for(int i=m;m<strlen(s);i++){
        *p=*(s+m);
        p++;
        s++;
    }
    *p='\0';
    *s='\0';
    return t;
}
