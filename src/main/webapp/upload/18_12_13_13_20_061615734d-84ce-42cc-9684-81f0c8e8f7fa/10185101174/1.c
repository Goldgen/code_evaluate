#include <stdio.h>
#include <stdbool.h>

char* _strcpy(char* dest, const char* src) {

    for(int i=0; i<_strlen(src)+1; i++){
        if(i==_strlen(src))
        *(dest+i)='\0';
        else
        *(dest+i)=*(src+i);
    }
    return dest;
    // ????? strcpy
}
int _strlen(const char* str) {
    int i=0;
    while((*str)!='\0'){
        str++;
        i++;
    }
    return i;
   // ????? strlen
}
int _strcmp(const char* lhs, const char* rhs) {
    int m=0;
    for(int i=0; i<_strlen(rhs); i++){
        if(lhs[i]!=rhs[i]){
            if(lhs[i]>rhs[i])
            m++;
            else
            m--;
            break;
        }
    }

        return m;
   // ????? strcmp
}
char* _strcat(char* dest, const char* src) {
   char *ch=dest;
   for(int i=_strlen(dest); i<_strlen(dest)+_strlen(src); i++){
    *(dest+i)=*(src++);
   }
   *(dest+_strlen(dest)+_strlen(src))='\0';
   return ch;
   

   // ????? strcat
}
char* _gets(char* str) {
   char ch;
   char *str1=str;
   while((ch=getchar())&&ch!='\n') {
    *str1=ch;
    str1++;
   }
   *str1='\0';
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
