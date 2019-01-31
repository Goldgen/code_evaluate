#include <stdio.h>
#include <stdio.h>
char* _strcpy(char* dest, const char* src)
{

    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
*dest='\0';
}
int _strlen(const char* str)
{

    int n=0;
    while(*str!='\0')
    {
        n++;
        str++;
    }
	return n;
}
int _strcmp(const char* lhs, const char* rhs)
{
    for(;*lhs==*rhs;lhs++,rhs++)
    {
        if(*lhs=='\0')
            return 0;
    }
    return *lhs-*rhs;
}
char* _strcat(char* dest, const char* src)
{
    while(*dest!='\0')
    {
        dest++;
    }
    while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
char* _gets(char* str)
{

    while((*str=getchar())!='\n')
    {
        str++;
    }
    *str='\0';
}
int main() {
    char a[201],b[101],cmd[7];
    while(1) 
	{
        _gets(cmd);
        if(_strcmp(cmd, "GETS") == 0) 
		{
            _gets(a);
            puts(a);
        }
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
		{
            printf("%d\n",_strlen(a));
        } 
		else if(_strcmp(cmd, "STRCMP") == 0) 
		{
            _gets(b);
            int result = _strcmp(a, b);
            printf("%d\n", result > 0 ? 1 : (result < 0 ? -1 : 0));
        }
		else if(_strcmp(cmd, "STRCAT") == 0) 
		{
            _gets(b);
            _strcat(a, b);
            puts(a);
        } 
		else
		{
            break;
        }
    }
    return 0;
}
