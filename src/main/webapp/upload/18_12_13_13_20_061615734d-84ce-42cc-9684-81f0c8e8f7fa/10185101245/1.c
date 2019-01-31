#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int i;
    for(i=0;i<_strlen(src);i++)
         dest[i]=src[i];
   for(;i<_strlen(dest);i++)
    dest[i]='\0';
}
int _strlen(const char* str) {
   int i;
    for(i=0;;i++)
        if(str[i]=='\0')
        break;
    return i;
}
int _strcmp(const char* lhs, const char* rhs) {
  int l1=_strlen(lhs),l2=_strlen(rhs);
  if(l2>l1)
    l1=l2;
   for(int i=0;i<l1;i++)
  {
      if(lhs[i]>rhs[i])
        return 1;
      else if(lhs[i]<rhs[i])
        return -1;
    }
   return 0;
}
char* _strcat(char* dest, const char* src) {
int i,j;
for(i=_strlen(dest),j=0;j<_strlen(src);i++,j++)
    dest[i]=src[j];
for(;i<_strlen(dest);i++)
    dest[i]='\0';
return dest;
}
char* _gets(char* str) {
    char ch;
    int i=0;
    while((ch=getchar())!='\n')
    {
        str[i]=ch;
        i++;
    }
    for(;i<_strlen(str);i++)
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
