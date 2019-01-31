#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int len2;
    len2 = _strlen(src);
    for(int i = 0; i < len2; i++)
        dest[i] = src[i];
    dest[len2] = 0;
    return dest;
}
int _strlen(const char* str) {
    int len = 0;
    while(str[len] != 0)
        len++;
    return len;
}
int _strcmp(const char* lhs, const char* rhs) {
    int len1, len2, len;
    len1 = _strlen(lhs);
    len2 = _strlen(rhs);
    len = len1 < len2 ? len1 : len2;
    for(int i = 0; i < len; i++){
        if(lhs[i] > rhs[i])
            return lhs[i] - rhs[i];
        else if(lhs[i] < rhs[i])
            return lhs[i] - rhs[i];
    }
    if(len1 > len2)
        return 1;
    else if(len1 < len2)
        return -1;
    return 0;
}
char* _strcat(char* dest, const char* src) {
    int len1, len2;
    len1 = _strlen(dest);
    len2 = _strlen(src);
    for(int i = 0; i < len2; i++)
        dest[len1 + i] = src[i];
    dest[len1 + len2] = 0;
    return dest;
}
char* _gets(char* str) {
    int i = 0;
    char c;
    while((c = getchar()) && (c != EOF && c != '\n'))
        str[i++] = c;
    str[i] = 0;
    return str;
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
