#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    // ????? strcpy
    char *st=dest;
    while(*src){
        *dest=*src;
        src++;
        dest++;
    }
    *dest='\0';
    return st;
}
int _strlen(const char* str) {
    // ????? strlen
    int len=0;
    while(*str){
        str++;
        len++;
    }
    return len;
}
int _strcmp(const char* lhs, const char* rhs) {
    // ????? strcmp
    int ret=0;
    while( !(ret = *( char*)lhs - *( char*)rhs ) && *lhs )
    {
        lhs++;
        rhs++;
    }
    if(ret < 0)
        return -1;
    else if(ret > 0)
        return 1;
    return 0;
}
char* _strcat(char* dest, const char* src) {
    // ????? strcat
    char *st=dest;
    while(*dest) dest++;
    while(*src){
        *dest=*src;
        dest++;
        src++;
    }
    return st;
}
char* _gets(char* str) {
    // ????? ???????????????????
    // ?????? EOF ???
    char *st=str;
    char ch;
    while((ch=getchar())!='\n'){
        *str=ch;
        str++;
    }
    *str='\0';
    return st;
}
int main() {
    char a[2031],b[1301],cmd[73];
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