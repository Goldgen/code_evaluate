#include <stdio.h>

int main(void)
{
    char ch;
    scanf("%c",&ch);
    if (ch>=65&&ch<=90)
    {
        printf("%c",ch+('a'-'A'));
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}