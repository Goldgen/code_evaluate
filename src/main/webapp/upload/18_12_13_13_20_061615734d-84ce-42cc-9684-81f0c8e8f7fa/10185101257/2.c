#include <stdio.h>
#include <string.h>
char* strmcpy(char *t, const char *s, int m){
    while(*(s + m) != '\0'){
        *t = *(s + m);
        s++;
        t++;
    }
    *t = '\0';
}

int main(){
    char from[100], to[100];
    gets(from);
    int flag;
    scanf("%d", &flag);
    strmcpy(to, from, flag);
    printf("%s", to);
    return 0;
}
