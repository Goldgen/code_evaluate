#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    if((dest==NULL)||(src==NULL))
        return NULL;
    while(* src!='\0')
    {
        * dest = * src;
        ++ src,++dest;
    }
    return dest;
}
int _strlen(const char* str) {
   int i=0;
   while(* (str++)!='\0')
       ++i;
   return i;
}
int _strcmp(const char* lhs, const char* rhs) {
   while(*lhs == * rhs)
   {
       if((* lhs=='\0')||(*rhs=='\0'))
        return 0;
       lhs++,rhs++;
   }
   return *lhs-*rhs;
}
char* _strcat(char* dest, const char* src) {
    char *p=dest;
   while(* p !='\0')
      ++p;
   while(* src !='\0')
     *p++=*src++;
    *p='\0';
    return dest;
}
char* _gets(char* str) {
    int i=0;
   while(1)
   {
       str[i]=getchar();
       if(str[i]=='\n')
       {
           str[i]='\0';
            break;
       }
       ++i;
   }
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