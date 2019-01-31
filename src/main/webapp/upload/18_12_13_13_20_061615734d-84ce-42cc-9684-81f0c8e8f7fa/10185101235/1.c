#include <stdio.h>
char* _strcpy(char* dest, const char* src)
{
    int len = 0;
    while(src[len]!='\0')
    {
        len++;
    }
    int i = 0;
    for(i=0;i<=len;i++)
    {
        dest[i]=src[i];
    }
}
int _strlen(const char* str)
{
    int len = 0;
    while(str[len]!='\0')
    {
        len++;
    }
    return len;
}
int _strcmp(const char* lhs, const char* rhs)
{
    int len = 0;
    while(rhs[len]!='\0'&&lhs[len]!='\0')
    {
        len++;
    }
    int i = 0;
    for(i=0;i<len;i++)
    {
        if(lhs[i]>rhs[i])
        {
            return 1;
        }
        else if(lhs[i]<rhs[i])
        {
            return -1;
        }
    }
    return 0;
}
char* _strcat(char* dest, const char* src)
{
    int len1 = 0;
    while(dest[len1]!='\0')
    {
        len1++;
    }
    _strcpy(dest + len1, src);
    return dest;
}
char* _gets(char* str)
{
    int i = 0;
    str[i] = getchar();
    while(str[i]!='\n')
    {
        i++;
        str[i] = getchar();
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
