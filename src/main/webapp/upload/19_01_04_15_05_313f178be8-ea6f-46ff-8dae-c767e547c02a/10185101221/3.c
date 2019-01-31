#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str[1000];
    char find[1000];
    char c;
    while((c=getchar())!='#'){
    scanf("%s%s",str,find);
    getchar();
    int lenstr=strlen(str);
    int n=0;
    for(n=lenstr;n>0;n--)
        str[n]=str[n-1];
    str[lenstr+1]='\0';
    int len=strlen(find);
    char *pGot_char = str;
    int i=0;
    while(pGot_char = strstr(pGot_char,find)){
        pGot_char+=len;
        i++;
    }
    printf("%d\n",i);
    }
    return 0;
}
