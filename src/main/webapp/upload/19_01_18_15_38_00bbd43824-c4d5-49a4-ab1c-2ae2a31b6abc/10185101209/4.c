#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch;

    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
        printf("%c",tolower(ch));
    else
        printf("ERROR");
    return 0;
}
