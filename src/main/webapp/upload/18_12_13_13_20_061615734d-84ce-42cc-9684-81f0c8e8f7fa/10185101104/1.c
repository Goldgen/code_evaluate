#include <stdio.h>

char* _strcpy(char* dest, const char* src) {
    char *p=dest;
    while(*src!=0)
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest=0;
    return p;
}
int _strlen(const char* str) {
    int n=0;
    while((*str)!=0)
    {
        n++;
        str++;
    }
    return n;
}
int _strcmp(const char* lhs, const char* rhs) {
    while(*lhs!=0)
    {
        if(*rhs==0)
            return 1;
        if(*lhs==*rhs)
        {
            lhs++;
            rhs++;
        }
        else if(*lhs>*rhs)
            return 1;
        else if(*lhs<*rhs)
            return -1;
    }
    if(*rhs!=0)
        return -1;
    return 0;
}
char* _strcat(char* dest, const char* src) {
    char *p=dest;
    while(*dest!=0)
        dest++;
    while(*src!=0)
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest=0;
    return p;
}
char* _gets(char* str) {
    char *p=str;
    while((*str=getchar())!='\n')
        str++;
    *str=0;
    return p;
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
