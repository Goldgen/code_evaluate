#include <stdio.h>
int _strlen(const char* str) {
    int x = 0;
    while(str[x]!='\0')
        x++;
   return x;
}
char* _strcpy(char* dest, const char* src) {
    for(int x =0;src[x]!='\0';x++)
    {
        dest[x]=src[x];
    }
    dest[_strlen(src)]='\0';
    return dest;
}
int _strcmp(const char* lhs, const char* rhs) {
   int i =0;
   int x = 0;
   while(i==0&&lhs[x]!='\0'&&rhs[x]!='\0')
   {
       if(lhs[x]>rhs[x])
     i = 1;
   else if(lhs[x]<rhs[x])
     i = -1;
   else
     i = 0;
     x++;
   }
   if(i==0)
   {
       if(_strlen(lhs)<_strlen(rhs))
        i = -1;
       else if(_strlen(lhs)>_strlen(rhs))
        i = 1;
        else
        i = 0;
   }
   return i;
}
char* _strcat(char* dest, const char* src) {
   int len1 =_strlen(dest);
   for(int i=0;src[i]!='\0';i++)
   {
       dest[i+len1]=src[i];
   }
   dest[len1+_strlen(src)]='\0';
   return dest;
}
char* _gets(char* str) {
   int i=0;
   char a;
   while((a=getchar())&&a!='\n')
    {
        str[i]=a;
        i++;
    }
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
