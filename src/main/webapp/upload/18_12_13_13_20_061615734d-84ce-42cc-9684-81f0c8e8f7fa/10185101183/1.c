#include <stdio.h>
char* _strcpy(char* dest, const char* src)
{
    int i;
    for(i=0;src[i]!='\0';++i)
        dest[i]=src[i];
    dest[++i]='\0';
    return dest;
}
int _strlen(const char* str)
{
     int size = 0;
      if(!str)
      return -1;
      while(*str)
      {
       size++;
       str++;
      }
    return size;
}
int _strcmp(const char* lhs, const char* rhs)
{
    int i;
    int flag=0;
    for(i=0;rhs[i]!='\0'&&lhs[i]!='\0';i++)
    {
        if(*(lhs+i)>*(rhs+i))
        {
            flag=1;
            break;
        }
        else if(*(lhs+i)<*(rhs+i))
        {
            flag=1;
            break;
        }
    }
    return flag;
}
char* _strcat(char* dest, const char* src)
{
   int i=_strlen(dest);
   for(int j=0;src[j]!='\0';++j)
   {
       dest[i]=src[j];
       ++i;
   }
   dest[i]='\0';
   return dest;
}
char* _gets(char* str)
{
    char *p=str;
    while((*str=getchar())!='\n')
    {
        str++;
    }
    *str='\0';
    return p;
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
