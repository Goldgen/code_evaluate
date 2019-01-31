#include <stdio.h>
#include <string.h>


#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
   while(*src!='\0')
   {
       *dest=*src;
       src++;
       dest++;
   }
}
int _strlen(const char* str) {
   int length=0;
   while(*str!='\0')
    {length++;
    str++;}
    return length;
}
int _strcmp(const char* lhs, const char* rhs) {
    int i=1;
   while(*lhs!='\0'&&*rhs!='\0')
   {
       if(*lhs>*rhs)
       {i=0;
        return 1;}
       if(*lhs<*rhs)
        {i=0;
        return -1;}
       else
       {
           lhs++;
           rhs++;
       }
   }
   if(i)
    return 0;
}
char* _strcat(char* dest, const char* src) {
   while(*dest!='\0')
      dest++;
   while(*src!='\0')
    {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
char* _gets(char* str) {
  gets(str);
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
            _strcat(a, b);
            puts(a);
        } else {
            break;
        }
    }
    return 0;
}
