#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char m;
    scanf("%c",&m);
    if isupper(m)
        printf("ERROR");
    else{
    switch(m)
    {
    case 'a':case 'e':case'i':case'o':case'u':
        printf("vowel");
        break;
    default:
        printf("consonant");
        break;
    }
    }
    return 0;
}