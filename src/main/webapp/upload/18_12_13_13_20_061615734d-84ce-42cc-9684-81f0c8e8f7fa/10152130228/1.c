#include <stdio.h>

char* _strcpy(char* dest, const char* src) {
    // ????? strcpy
    char *p1,*p2;
    p1=dest;
    p2=src;
    while(*p2)
    *p1++=*p2++;
    p1--;
    return p1;
}

int _strlen(const char* str) {
   // ????? strlen
    int n=0;
    char *p=str;
    while(*p++) n++;
    return n;
}

int _strcmp(const char* lhs, const char* rhs) {
   // ????? strcmp
    char *p1,*p2;
    p1=lhs;
    p2=rhs;
    while(*p2 && *p1)
    if(*(p1++)- *(p2++) ) return *(p1++)- *(p2++) ;
    return 0;
}

char* _strcat(char* dest, const char* src) {
   // ????? strcat
    /*char *p1,*p2;
    p1=dest;
    p2=src;
    p1+=strlen(dest);
    while(*p2)
    *p1++=*p2++;
    return p1;*/
    char* ret = dest;
    while (*dest)
    {
        *dest++;
    }
    while (*dest++ = *src++)
    {
        ;
    }
    return ret;
}

char* _gets(char* str) {
   // ????? ???????????????????
   // ?????? EOF ???
    int i=0;
    char c;
    do
    {
        c=getchar();
        str[i]=c;
        i++;
    }
    while(c!='\n');
    /*while(scanf("%c", &c)!='\n'){
        str[i++]=c;
    }*/
    str[i-1]='\0';
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
