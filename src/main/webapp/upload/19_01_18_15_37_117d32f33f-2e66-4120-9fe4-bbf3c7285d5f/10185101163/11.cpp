#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    scanf("%c",&ch);
    switch(ch)
    {
    case'a':case'e':case'i':case'o':case'u':
        printf("vowel");
        break;
    case'q':case'w':case'r':case't':case'y':
	case'p':case's':case'd':case'f':case'g':
	case'h':case'j':case'k':case'l':case'z':
	case'x':case'c':case'v':case'b':case'n':case'm':
        printf("consonant");
        break;
    default:
        printf("ERROR");
		break;
    }
    
    return 0;
}