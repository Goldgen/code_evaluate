#include <stdio.h>
#include <string.h>

int main(void)
{
    char a;
    scanf("%c",&a);
    if (a < 97 || a > 123)
        printf("ERROR");
    else
        switch (a) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("vowel");
                break;
            default:
                printf("consonant");
                break;
    }
    return 0;
}
