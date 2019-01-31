#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90) printf("%c",ch+32);
    else printf("ERROR");
    return 0;
}