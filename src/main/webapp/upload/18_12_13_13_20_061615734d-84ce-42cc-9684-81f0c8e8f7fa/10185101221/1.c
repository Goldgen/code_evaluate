#include <stdio.h>
#include <stdlib.h>

void _strcpy(char* dest, const char* src) {
    int i=0;
    for(i=0;src[i]!='\0';i++){
        dest[i]=src[i];
    }
    dest[i]='\0';
    return ;
}
int _strlen(const char* str) {
    int i=0;
    for(i=0;;i++){
	if(str[i]=='\0')
		break;
	}
    return i;
}
int _strcmp(const char* lhs, const char* rhs) {
    for(int i=0;(lhs[i]!='\0')||(rhs[i]!='\0');i++){
        if(lhs[i]>rhs[i])
            return 1;
        else if(lhs[i]<rhs[i])
            return -1;
    }
    return 0;
}
char* _strcat(char* dest, const char* src) {
   int nd=_strlen(dest);
   int ns=_strlen(src);
   for(int i=0;i<ns;i++)
    dest[i+nd]=src[i];
    dest[nd+ns]='\0';
   return dest;
}
char* _gets(char* str) {
    int i=0;
   for(i=0;;i++){
    str[i]=getchar();
    if(str[i]=='\n')
        break;
   }
   str[i]='\0';
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
