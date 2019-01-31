#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int i=0;
    while(*src!='\0')
    {
        *(dest+i)=*(src+i);
        i++;
    }
    *(dest+i)='\0';

}
int _strlen(const char* str) {
   int c = 0,i=0;
     while(*(str+i) !='\0')
     {
         c++;
         i++;
     }
     return c;
}
int _strcmp(const char* lhs, const char* rhs) {
    for(;*lhs==*rhs;lhs++,rhs++)
    {
        if(*lhs=='\0')
            return 0;
    }
    return *lhs-*rhs;
}
char* _strcat(char* dest, const char* src) {
    int i=0,j=0;
    while(*dest!='\0')
    {
        i++;
    }
   while(*src!='\0')
   {
       *(dest+i++)=*(src+j++);
   }
   *(dest+i)='\0';
}
char* _gets(char* str) {
    int i=0;
    while ((str[i]=getchar())!='\n')
    i++;
    str[i]='\0';
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