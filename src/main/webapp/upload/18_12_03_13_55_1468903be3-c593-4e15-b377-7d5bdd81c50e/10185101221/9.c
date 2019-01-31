#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str[100];
    char find[100];
    gets(str);
    gets(find);
    char *pgot_char = str;
    int count=0;
    char *pp=strstr(pgot_char,find);
    while(pgot_char=strstr(pgot_char,find)){
        count++;
        pgot_char+=1;
    }
    if(count>0)
       printf("%s: %d time(s), first at %d",find,count,pp-str);
    else
       printf("%s: %d time(s), first at -1",find,count);
    return 0;
}
