#include <stdio.h>
#include <stdlib.h>

int main()
{
char ch;
scanf("%c",&ch);
if(!islower(ch))
    printf("ERROR");
else
{
    switch(tolower(ch))
    {case'a':case'e':case'i':case'o':case'u':
        printf("vowel");
        break;
    default:
        printf("consonant");
        break;

    }
}

    return 0;

}