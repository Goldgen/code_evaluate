#include <stdio.h>
char* _strcpy(char* dest, const char* src) {
int i;
for(i=0;src[i]!='\0';i++)
dest[i]=src[i];
dest[i]='\0';
}
int _strlen(const char* str) {
int j;
for(j=0;;j++)
{if(str[j]=='\0')
return j;}
}
int _strcmp(const char* lhs, const char* rhs) {
int i;
for(i=0;lhs[i]!='\0';i++)
    {if(lhs[i]>rhs[i])
    return 1;
    else if(lhs[i]<rhs[i])
    return -1;}
if(rhs[i]=='\0')
return 0;
return -1;
}
char* _strcat(char* dest, const char* src) {
int k=0,i;
for(k=0;dest[k]!='\0';)
    k++;
for(i=0;src[i]!='\0';i++)
    dest[i+k]=src[i];
return dest;
}
char* _gets(char* str) {
char ch;
ch=getchar();
int i;
for(i=0;ch!='\n';i++)
{str[i]=ch;
ch=getchar();}
str[i]='\0';
return str;
}
int main() {
    char a[201]={0},b[101]={0},cmd[7]={0};
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
        }
        else {
            break;
        }
    }
    return 0;
}