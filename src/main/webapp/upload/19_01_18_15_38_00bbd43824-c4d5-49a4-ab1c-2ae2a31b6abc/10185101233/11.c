#include <stdio.h>
 main()
{
    char a;
    scanf("%c",&a);
    if (a<=122&&a>=97)
    {switch (a)
     {
        case 'a':case 'e':case 'i':case 'o':case 'u':
        printf("vowel");
        break;
        default:
        printf("consonant");
        break;
     }
    }
    else
        printf("ERROR");
    return 0;
}
