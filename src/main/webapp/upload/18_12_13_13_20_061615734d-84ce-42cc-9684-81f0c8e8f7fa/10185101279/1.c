#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
char* _strcpy(char* dest, const char* src) {
    char *adress=dest;
    while(*src){
    *dest=*src;
    dest++;
    src++;
    }
    *dest='\0';
    return adress;
}
int _strlen(const char* str) {
   int len=0;
   while(*str){
    len++;
    str++;
   }
   return len;
}
int _strcmp(const char* lhs, const char* rhs) {
   while(*lhs&&*rhs&&*lhs==*rhs){
    rhs++;
    lhs++;
   }
   return *lhs-*rhs;
}
char* _strcat(char* dest, const char* src) {
   char *adress=dest;
   while(*dest)
    dest++;
   while(*src){
    *dest=*src;
    dest++;
    src++;
   }
   *dest='\0';
   return adress;
}
char* _gets(char *str) {
char *adress=str;
while((*str=getchar())!='\n'){
    str++;
}

*str='\0';
return adress;


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



