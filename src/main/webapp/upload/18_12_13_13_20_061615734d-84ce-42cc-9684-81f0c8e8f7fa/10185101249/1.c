#include <stdio.h>
int _strlen(const char * str) {
     // ????? strlen
   int i=0;
   while(str[i] != '\0')
    i++;
    return i;

}
char * _strcpy(char * dest, const char * src) {
	// ????? strcpy
    int i;
    for(i = 0; i < _strlen(src); i++)
        dest[i] = src[i];
    dest[i] = '\0';
	return dest;
}
int _strcmp(const char * lhs, const char * rhs) {
    // ????? strcmp
   int a= _strlen(lhs), b= _strlen(rhs), i=0;
   if(b>a)
        a=b;
   for(i = 0; i < a; i++)
        if(lhs[i] != rhs[i])
        {
            if(lhs[i] < rhs[i])
                return -1;
            return 1;
        }
    return 0;
}
char * _strcat(char* dest, const char* src) {
    // ????? strcat
   int a, b,i;
	i=_strlen(dest)+ _strlen(src);
    for(a = _strlen(dest), b = 0; b < _strlen(src); a++, b++)
        dest[a] = src[b];
        dest[i] = '\0';
	return dest;
}
char * _gets(char * str) {
    // ????? ???????????????????
   // ?????? EOF ???
   int i=0;
   char a;
   while((a = getchar()) != '\n')
    {
        str[i]=a;
        i++;
    }
        str[i] = '\0';
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
