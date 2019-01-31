#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void re(char *p);
int main()
{
    char str[100];
    re(str);
}
void re(char *p){
    *p=getchar();
    if(*p=='?')
        return;
        re(p+1);
    printf("%c",*p);
}
