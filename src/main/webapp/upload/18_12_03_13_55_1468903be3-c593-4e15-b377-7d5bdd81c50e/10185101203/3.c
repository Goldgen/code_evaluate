#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
    char ch1[85],ch2[85];
    int i;
    scanf("%s %s",&ch1,&ch2);
    if(strlen(ch1)>=strlen(ch2))
    {
        for(i=0;i<strlen(ch2);i++)
            printf("%c%c",ch1[i],ch2[i]);
        for(i=strlen(ch2);i<strlen(ch1);i++)
            printf("%c",ch1[i]);
    }
    if(strlen(ch1)<strlen(ch2))
    {
        for(i=0;i<strlen(ch1);i++)
            printf("%c%c",ch1[i],ch2[i]);
        for(i=strlen(ch1);i<strlen(ch2);i++)
            printf("%c",ch2[i]);
    }
}
