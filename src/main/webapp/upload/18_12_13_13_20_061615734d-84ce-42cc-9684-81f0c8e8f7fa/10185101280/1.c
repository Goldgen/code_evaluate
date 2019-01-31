#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
    int n;
    for(n=0;n<_strlen(src);n++)
     dest[n]=src[n];
     for(;n<_strlen(dest);n++)
        dest[n]='\0';

}
int _strlen(const char* str) {
    int n;
    for(n=0;;n++)
        if(str[n]=='\0') break;
    return n;
}
int _strcmp(const char* lhs, const char* rhs) {
    int long1=_strlen(lhs);
    int long2=_strlen(rhs);
    if(long2>long1)
        long1=long2;
    for(int n=0;n<long1;n++)
    {
        if(lhs[n]>rhs[n])
            return 1;
        else if(lhs[n]<rhs[n])
            return -1;
    }
    return 0;
   // ????? strcmp
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
    int i=0;
    char c;
    while((c=getchar())!='\n')
    {
        str[i]=c;
        i++;
    }
    for(;i<_strlen(str);i++)
    {
        str[i]='\0';
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
