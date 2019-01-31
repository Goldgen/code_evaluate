#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int i=0;
    for(i=0;*(src+i)!='\0';i++){
        *(dest+i)=*(src+i);
    }
    *(dest+i)='\0';
    return dest;
    // ????? strcpy
}
int _strlen(const char* str) {
    char *strs=str;
    while (*(strs)!='\0')strs++;
    return strs-str;
   // ????? strlen
}
int _strcmp(const char* lhs, const char* rhs) {
    int i=0;
    for(i=0;;i++){
        if(*(lhs+i)=='\0'&&*(rhs+i)=='\0')return 0;
        if(*(lhs+i)==*(rhs+i))continue;
        else if(*(lhs+i)>*(rhs+i))return 1;
        else return -1;
    }
   // ????? strcmp
}
char* _strcat(char* dest, const char* src) {
    int n=strlen(dest);
    int i=0;
    for(i=0;;i++){
        *(dest+i+n)=*(src+i);
        if(*(dest+n+i)=='\0')break;
    }
    return dest;
   // ????? strcat
}
char* _gets(char* str) {
    int i=0;
    while(~scanf("%c",str+i)&&*(str+i)!='\n')i++;
    *(str+i)='\0';
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
