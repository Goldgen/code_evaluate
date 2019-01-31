#include<stdio.h>
int main()
{
    char letter;
    scanf("%c",&letter);
    if((letter >='A')&&(letter <= 'Z'))
    {
        letter += 'a'-'A';
        printf("%c",letter);
    }
    else
        printf("ERROR");
    return 0;
}
