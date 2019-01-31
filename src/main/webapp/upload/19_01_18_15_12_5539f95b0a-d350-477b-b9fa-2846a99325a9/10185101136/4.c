#include <stdio.h>

int main()
{
    char ch;

    scanf("%c", &ch);
    if (ch <= 'Z' && ch >= 'A')
        printf("%c", ch + 'a' - 'A');
    else
        printf("ERROR");
    return 0;
}
