#include <stdio.h>

char* _strcpy(char* dest[], const char* src[])
{
    int i=0;
    while(dest[i]!='\0')
    {
        dest[i] = src[i];
        i++;
    }
    src[i]='\0';
}
int _strlen(const char* str[])
{
   int i=0;
   while(str[i]!='\0')
   {
       i++;
   }
   return i;
}
int _strcmp(const char* lhs[], const char* rhs[])
{
   int i=0;
   while(lhs[i]!='\0'&&rhs[i]!='\0')
   {
       if(lhs[i]<rhs[i]) return -1;
       else if(lhs[i]>rhs[i]) return 1;
   }
   return 0;
}
char* _strcat(char* dest[], const char* src[])
{
   int i=0,x=_strlen(dest);
   while(src[i]!='\0')
   {
       dest[x+i]=src[i];
       i++;
   }
   dest[x+i]='\0';
}
char* _gets(char* str[])
{
    int i=0;
    while(1)
    {
        str[i]=getchar();
        i++;
    }
}

int main()
{
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
