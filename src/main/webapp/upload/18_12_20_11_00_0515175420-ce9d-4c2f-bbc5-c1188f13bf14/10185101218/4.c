#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void daoxu(char* p)
{
    if(*p != '?'&&*p != '\0'){
        daoxu(p+1);
        printf("%c",*p);
    }
    else printf("\0");
}

int main(void)
{
    char s1[20000] = "\0";
    gets(s1);
    daoxu(s1);
    return 0;
}
