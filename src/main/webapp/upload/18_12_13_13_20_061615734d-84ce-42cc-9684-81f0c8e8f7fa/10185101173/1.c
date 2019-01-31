#include <stdio.h>
int sizeof_(const char* src)
{
    int i=0;
    while(src[i]!='\0')
        ++i;
    return i;
}

char* _strcpy(char* dest, const char* src)
{
    int a=sizeof_(src),i=0;
    for(i=0;i<a;++i)
    {
        dest[i]=src[i];
    }
    dest[i]='\0';
    return 0;
}
int _strlen(const char* str) {
   int a=sizeof_(str);
   return a;
}
int _strcmp(const char* lhs, const char* rhs) {
   int a=sizeof_(lhs),i=0;
   for(i=0;i<a;++i)
   {
       if(lhs[i]>rhs[i])
        return 1;
       else if(lhs[i]<rhs[i])
        return -1;
   }
   return 0;
}
char* _strcat(char* dest, const char* src) {
   int a=sizeof_(dest),b=sizeof_(src),i=0;
   for(i=0;i<b;++i)
   {
       dest[a+i]=src[i];
   }
   dest[a+i]='\0';
   return dest;
}
char* _gets(char* str) {
   gets(str);
   str[sizeof_(str)]='\0';
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
