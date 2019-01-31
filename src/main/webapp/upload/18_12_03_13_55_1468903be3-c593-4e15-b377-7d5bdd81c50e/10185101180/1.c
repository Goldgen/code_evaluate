#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char num[81];
    char thenew[81];
    gets(num);
    for(i=0;num[i]!='\0';i++)
    {
        switch(num[i])
        {
        case 'a': case 'b': case 'c': case 'A': case 'B': case 'C':
            thenew[i]='2';
            break;
        case 'd': case 'e': case 'f': case 'D': case 'E': case 'F':
            thenew[i]='3';
            break;
        case 'g': case 'h': case 'i': case 'G': case 'H': case 'I':
            thenew[i]='4';
            break;
        case 'j': case 'k': case 'l': case 'J': case 'K': case 'L':
            thenew[i]='5';
            break;
        case 'm': case 'n': case 'o': case 'M': case 'N': case 'O':
            thenew[i]='6';
            break;
        case 'p': case 'q': case 'r': case 's': case 'P': case 'Q': case 'R': case 'S':
            thenew[i]='7';
            break;
        case 'v': case 't': case 'u': case 'V': case 'T': case 'U':
            thenew[i]='8';
            break;
        case 'w': case 'x': case 'y': case 'z': case 'W': case 'X': case 'Y': case 'Z':
            thenew[i]='9';
            break;
        default:
            break;
        }
        printf("%c",thenew[i]);
    }
    return 0;
}
