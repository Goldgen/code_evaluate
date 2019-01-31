#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int i = 0;
    while(src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return dest;
    // ????? strcpy
}

int _strlen(const char* str) {
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
   // ????? strlen
}

int _strcmp(const char* lhs, const char* rhs) {
    int i = 0;
    while(lhs[i] || rhs[i]){
        if(lhs[i] > rhs[i]){
            return 1;
        }else if(lhs[i] < rhs[i]){
            return -1;
        }
        i++;
    }
    return 0;
   // ????? strcmp
}

char* _strcat(char* dest, const char* src) {
    int destLen = _strlen(dest);
    int i = 0;
    while(src[i]){
        dest[i+destLen] = src[i];
        i++;
    }
    dest[i+destLen] = 0;
    return dest;
   // ????? strcat
}

char* _gets(char* str) {
    char c = 0;
    c = getchar();
    int i = 0;
    while(c != '\n'){
        str[i] = c;
        i++;
        c = getchar();
    }
    str[i] = 0;
    return str;
   // ????? ???????????????????
   // ?????? EOF ???
}

int main() {
    char a[201],b[101],cmd[7];
    while(1) {
        _gets(cmd);
        if(_strcmp(cmd, "GETS") == 0) {
            puts(_gets(a));
        } else if(_strcmp(cmd, "STRCPY") == 0) {
            int offset;
            scanf("%d",&offset);
            getchar();
            _gets(b);
            _strcpy(a + offset, b);
            puts(a);
        } else if(_strcmp(cmd, "STRLEN") == 0) {
            printf("%d\n",_strlen(a));
        } else if(_strcmp(cmd, "STRCMP") == 0) {
            _gets(b);
            int result = _strcmp(a, b);
            printf("%d\n", result > 0 ? 1 : (result < 0 ? -1 : 0));
        } else if(_strcmp(cmd, "STRCAT") == 0) {
            _gets(b);
            puts(_strcat(a, b));
        } else {
            break;
        }
    }
    return 0;
}
