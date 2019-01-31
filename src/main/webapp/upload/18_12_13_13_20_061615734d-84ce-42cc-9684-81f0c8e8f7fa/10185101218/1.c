#include <stdio.h>
#include <string.h>

char* _strcpy(char* dest, const char* src) {
    // ????? strcpy
    char* temp;
    temp = dest;
    while(*src != '\0'){
        *temp = *src;
        temp++;
        src++;
    }
    return dest;
}
int _strlen(const char* str) {
   // ????? strlen
   int js = 0;
   while(*str != '\0'){
    js++;
    str++;
   }
   return js;
   }
int _strcmp(const char* lhs, const char* rhs) {
   // ????? strcmp
   int js1 = 0,js2 = 0;
   while(*lhs != '\0'){
    js1 += (int)(*lhs);
    lhs++;
   }
   while(*rhs != '\0'){
    js2 += (int)(*rhs);
    rhs++;
   }
   if(js2 > js1) return 1;
   else if(js2 == js1) return 0;
   else return -1;
}
char* _strcat(char* dest, const char* src) {
   // ????? strcat
   char* temp = dest;
   while(*dest != '\0'){
    dest++;
   }
   while(*src !='\0'){
    *dest = *src;
    dest++;
    src++;
   }
   *dest = '\0';
   return temp;
}
char* _gets(char* str) {
   // ????? ???????????????????
   // ?????? EOF ???
   char* temp = str;
   char c = getchar();
   while(c != '\n'){
    *str = c;
    str++;
    c = getchar();
   }
   *str = '\0';
   return temp;
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
