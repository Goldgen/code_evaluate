#include <stdio.h>
#include<string.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        ch=ch-'A'+'a';
        printf("%c",ch);
    }
    else
        printf("ERROR");


    return 0;
}



