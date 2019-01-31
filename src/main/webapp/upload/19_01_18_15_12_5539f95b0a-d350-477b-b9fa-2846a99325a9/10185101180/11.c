#include <stdio.h>
int main()
{
    int zimu;
    zimu=getchar();
    switch(zimu)
    {
case 'a': case 'e': case 'i': case 'o': case 'u':
    printf("vowel");
    break;
    case 'b': case 'c': case 'd': case 'f': case 'g': case 'h': case 'j':
    case 'k': case 'l': case 'm': case 'n': case 'p': case 'q': case 'r':
    case 's': case 't': case 'v': case 'w': case 'x': case 'y': case 'z':
    printf("consonant");
    break;
    default:
        printf("ERROR");
		break;
    }
    return 0;
}
