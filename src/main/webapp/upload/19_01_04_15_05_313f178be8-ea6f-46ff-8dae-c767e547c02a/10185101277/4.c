#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int i=0,j=0;

int main()
{
    char str[110];
    char *p=str,*p1=str;
    char a;
    gets(str);
    int len=strlen(str);
    for(i=0,j=0,p=str;i<len;i++){
        a=*(p+i);
        if(a==' ') continue;
        while(p1=strchr(p1,a)){
            *p1=' ';
            j++;
            p1++;
        }
        printf("%c %d; ",a,j);
    }
    return 0;
}
