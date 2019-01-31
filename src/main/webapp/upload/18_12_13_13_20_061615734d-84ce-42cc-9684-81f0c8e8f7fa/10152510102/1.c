#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
	if (dest == NULL || src == NULL)
    {
        return NULL;
    }
    if (dest == src)
        return dest;
    while ((*dest++ = *src++) != '\0');
    return dest;
}
int _strlen(const char* str) {
	int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
}
int _strcmp(const char* lhs, const char* rhs) {
	
	int ret = 0 ;
	while( ! (ret = *(unsigned char *)lhs - *(unsigned char *)rhs) && *rhs){
		lhs++;
		rhs++;
	}
	if ( ret < 0 )ret = -1 ;
        else if ( ret > 0 )
            ret = 1 ;
	return ret ;
}
char* _strcat(char* dest, const char* src) {
	char *ret ;
	ret = dest ;
	while(*dest++) ;
	dest-- ;
	while(*dest++ = *src++) ;
	return ret ;
}
char* _gets(char* str) {
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