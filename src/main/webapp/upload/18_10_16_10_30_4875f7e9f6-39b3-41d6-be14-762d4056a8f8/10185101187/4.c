#include <stdio.h>

int main()
{
    int letter = 0;

    scanf("%c", &letter);

    if(letter >= 'A' && letter <= 'Z')
       {
        letter = letter + 'a' - 'A';
        printf("%c", letter);
       }
    else
        printf("ERROR");

    return 0;
}
