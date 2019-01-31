#include <stdio.h>

char* _strcpy(char* dest, const char* src) {
    int len = _strlen(src);
    char *pdest;
    char *psrc = src;
    for (pdest = dest; pdest < dest + 201; ++pdest)
        *pdest = '\0';
    for (pdest = dest; pdest < dest + len; ++pdest){
        *pdest = *psrc;
        psrc++;
    }
    return dest;
}
int _strlen(const char* str) {
   int len = 0;
   while (str[len] != '\0')
       ++len;
   return len;
}
int _strcmp(const char* lhs, const char* rhs) {
   int lenl = _strlen(lhs), lenr = _strlen(rhs);
   int l = 0, r = 0;
   while (l < lenl && r < lenr && lhs[l] == rhs[r]){
       ++l;
       ++r;
   }
   if (lhs[l] < rhs[r])
        return -1;
   else if (lhs[l] > rhs[r])
        return 1;
   return 0;
}
char* _strcat(char* dest, const char* src) {
    int len = _strlen(dest);
    int i = _strlen(dest);
    while (src[i - len] != '\0'){
        dest[i] = src[i - len];
        ++i;
    }
    return dest;
}
char* _gets(char* str) {
    char c;
    int i = 0;
    for (int j = 0; j < 101; ++j)
        str[j] = '\0';
    while ((c = getchar()) != '\n'){
        str[i] = c;
        ++i;
    }
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
