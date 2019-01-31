#include <stdio.h>

char* _strcpy(char* dest, const char* src)
{
    while(*src!='\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}
int _strlen(const char* str)
{
    int i;
    for(i=0; ; i++)
        if(*(str+i)=='\0')
            break;
    return i;
}
int _strcmp(const char* lhs, const char* rhs)
{
    int i, d=0;
    for(i=0; ; i++)
    {
        if(*(lhs+i)>*(rhs+i))
        {
            d = 1;
            break;
        }
        if(*(lhs+i)<*(rhs+i))
        {
            d = -1;
            break;
        }
    }
    return d;
}
char* _strcat(char* dest, const char* src)
{
    int i, j;
    for(i=0; ; i++)
        if(*(dest+i)=='\0')
            {
                j = i;
                break;
            }
    for(i=0; ; i++, j++)
        {
            *(dest+j) = *(src+i);
            if(*(src+i)=='\0')
            {
                *(dest+j+1) = '\0';
                break;
            }
        }
}
char* _gets(char* str)
{
    char *p = str;
    while((*str=getchar())!='\n')
        str++;
    *str = '\0';
    return p;
}
int main()
{
    char a[201],b[101],cmd[7];
    while(1)
        {
            _gets(cmd);
            if(_strcmp(cmd, "GETS") == 0)
                puts(_gets(a));
            else if(_strcmp(cmd, "STRCPY") == 0)
                {
                    int offset;
                    scanf("%d",&offset);
                    getchar();
                    _gets(b);
                    _strcpy(a + offset, b);
                    puts(a);
                }
            else if(_strcmp(cmd, "STRLEN") == 0)
                printf("%d\n",_strlen(a));
            else if(_strcmp(cmd, "STRCMP") == 0)
                {
                    _gets(b);
                    int result = _strcmp(a, b);
                    printf("%d\n", result > 0 ? 1 : (result < 0 ? -1 : 0));
                }
            else if(_strcmp(cmd, "STRCAT") == 0)
                {
                    _gets(b);
                    puts(_strcat(a, b));
                }
            else
                break;
    }
    return 0;
}
