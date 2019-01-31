#include <stdio.h>

char* strmcpy(char* t, char* s, int m);

int main() {
    char from[85],to[85];
    int m = 0;
    fgets(from, 85, stdin);
    scanf("%d", &m);
    strmcpy(to, from, m);
    printf("%s", to);
    return 0;
}

char* strmcpy(char* t, char* s, int m) {
    char *p = s + m;
    while (*p != '\0') {
        *t = *p;
        t++;
        p++;
    }
    *t = '\0';
    return t;
}
