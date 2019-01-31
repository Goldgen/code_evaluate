#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char A;
    scanf("%c",&A);
    
		switch(A)
    {
    case 'a': case'e': case'i': case'o': case'u':
    printf("vowel");
    break;

    case 'b': case 'c':case 'd':case 'g':case 'f':case 'h':case 'j':case 'k':case 'l': case 'm': case 'n':case 'p':case 'q':case 'r':case 's':case 't':case 'v':case 'w':case 'x':case 'y':case 'z':
   printf("consonant") ;
   break;

    default:
    printf("ERROR");
			break;

		}    
    return 0;

}