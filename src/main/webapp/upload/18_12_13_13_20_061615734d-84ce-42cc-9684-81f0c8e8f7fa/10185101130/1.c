#include <stdio.h>

char* _strcpy(char* dest, const char* src)
{
    int i = 0;
    while(*(src+i) != '\0')
    {
        *(dest+i) = *(src+i);
        i++;
    }
    *(dest+i) = '\0';
    return dest;
    // ????? strcpy
}
int _strlen(const char* str)
{
   int i = 0;
   while(*(str+i)!= '\0')
   {
       i++;
   }
   return i;
   // ????? strlen
}
int _strcmp(const char* ihs, const char* rhs)
{
   int i = 0;
   int sum1 = 0;
   int sum2 = 0;
   while(*(ihs+i) != '\0')
   {
       sum1 += (int)(*(ihs+i)-'0');
       i++;
   }
   int j = 0;
   while(*(rhs+j) != '\0')
   {
       sum2 += (int)(*(rhs+j)-'0');
       j++;
   }
   if(sum1 > sum2)
    return 1;
   else if(sum1 == sum2)
    return 0;
   else
    return -1;
   // ????? strcmp
}
char* _strcat(char* dest, const char* src)
{
   int i = 0;
   int a;
   while(*(dest+i) != '\0')
   {
       i++;
       a = i;
   }
   while(*(src+i-a) != '\0')
   {
       *(dest+i) = *(src+i-a);
       i++;
   }
   *(dest+i) = '\0';
   return dest;
   // ????? strcat
}
char* _gets(char* str)
{
   char c;
   int i = 0;
   while(1)
   {
    c = getchar();
    if(c == '\n')
     {
         *(str+i) = '\0';
         break;
     }
    else
        *(str+i) = c;
    i++;
   }
   return str;

   // ????? ???????????????????
   // ?????? EOF ???
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
