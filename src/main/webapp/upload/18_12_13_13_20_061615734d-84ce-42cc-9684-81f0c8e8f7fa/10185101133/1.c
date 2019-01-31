#include <stdio.h>
#include <stdlib.h>

char* _strcpy(char* dest, const char* src){
    char *cpy=dest;
    while(*src != '\0'){
        *dest++=*src++;
    }
    return cpy;
}

int _strlen(const char* str){
    int count=0;
    while(*str++){
        count++;
    }
    return count;
}

char* _strcat(char* dest, const char* src){
    char *tmp=dest;
    while(*dest!='\0')
        dest++;
    while((*dest = *src)!='\0'){
		dest++;src++;	
	}
    return tmp;
}

int _strcmp(const char* lhs, const char* rhs){
    while(*lhs != '\0' && *rhs!='\0' && *lhs==*rhs){
        lhs++;rhs++;
    }
    if(*lhs>*rhs)
        return 1;
    else if(*lhs<*rhs)
        return -1;
    return 0;
}

char* _gets(char* str){
    gets(str);
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

