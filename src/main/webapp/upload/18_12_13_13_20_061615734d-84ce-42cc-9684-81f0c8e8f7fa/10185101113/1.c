#include <stdio.h>
char* _strcpy(char* dest, const char* src)
{
    char *result=dest;
    while (*src!='\0')
    {
        *dest=*src;
        *dest++;
        *src++;
    }
    *dest='\0';
    return result;
}
int _strlen(const char* str)
{
    int length=0;
    while (*str++)
    {
        length++;
    }
    return length;
}
int _strcmp(const char* lhs, const char* rhs)
{
    while(*lhs!='\0'&&*rhs!='\0')
    {
        if(*lhs>*rhs)
            return 1;
        else if(*lhs<*rhs)
            return -1;
        *lhs++;
        *rhs++;
    }
    if(*lhs!='\0')
        return 1;
    if(*rhs!='\0')
        return -1;
    return 0;
}
char* _strcat(char* dest, const char* src)
{
    char *result=dest;
    while(*dest)
    {
        *dest++;
    }
    while (*src)
    {
        *dest++=*src++;
    }
    *dest='\0';
    return result;
}
char* _gets(char* str)
{
   char ch;
   char *result=str;
   while((ch = getchar())!='\n')
   {
		*str=ch;
		*str++;
   }
   *str ='\0';
   return result;
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

