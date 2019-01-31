#include <stdio.h>

main()

{
    char letter;
    scanf("%c",&letter);
    if(letter>=97&&letter<=122)
        switch(letter)
        {
            case'a':case'e':case'i':case'o':case'u':
            printf("vowel");
        break;
            default:
            printf("consonant");
        break;
        }
    else
        printf("ERROR");
    return 0;
}
