#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* _strcpy(char* dest, const char* src) {
  char *r=dest;
   while(*src!='\0')
   { *r++=*(src++);
   }
	*r='\0';
   return dest;
}
int _strlen(const char* str) {
   int i=0,cnt=0;
   while(str[i]!='\0')
   { cnt++;
    i++;
   }
   return cnt;
}
int _strcmp(const char* lhs, const char* rhs)
{ while(*lhs!='\0'&&*rhs!='\0')
   { if(*lhs==*rhs)
     {lhs++;
      rhs++;
     }
     else if(*lhs>*rhs)return 1;
     else return -1;
   }
   if(*lhs!='\0')return 1;
   if(*rhs!='\0')return -1;
   return 0;
}
char* _strcat(char* dest, const char* src) {
  char *cp=dest;
  while(*cp!='\0')
    cp++;
   while(*src!='\0')
   { *cp++=*src++;
    }
    *cp='\0';
    return dest;
}
char* _gets(char* str) {
   char x;
   char *p=str;
   while(scanf("%c",&x)&&x!='\n')
    {*p++=x;}
    *p='\0';
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