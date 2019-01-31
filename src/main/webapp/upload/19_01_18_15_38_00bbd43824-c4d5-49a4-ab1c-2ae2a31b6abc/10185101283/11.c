#include<stdio.h>
int main()
{
    char x ;
    scanf("%c",&x);          //enter a letter
    switch(x)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':     //all the vowel
        printf("vowel");
        break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j': case 'k':
    case 'l': case 'm': case 'n': case 'p': case 'q': case 'r': case 's': case 't':
    case 'v': case 'w': case 'x': case 'y': case 'z':                      //all the consonant
        printf("consonant");
        break;
    default:
        printf("ERROR");                                 //error
        break;
    }
    return 0;
}
