#include <stdio.h>
#include <string.h>

char* strmcpy(char* t, char* s, int m){

    int len = strlen(s+m);
    for(int i = 0; i < len; i++){
        t[i] = s[m+i];
    }
    t[len] = 0;
    return t;
}

int main(){

    char str1[1005], str2[1005];
    int m;
    gets(str1);
    scanf("%d", &m);
    strmcpy(str2, str1, m);
    printf("%s", str2);
    return 0;
}
