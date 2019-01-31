#include <stdio.h>
#include <stdlib.h>

int main()
{
   char ch;
   scanf("%c",&ch);
   switch(ch)
   {
   case 'a':case 'o':case 'e':case 'i':case 'u':printf("vowel");
   break;
   case 'b':case 'c':case 'd':case 'f':case 'g':
   case 'h':case 'j':case 'k':case 'l':case 'm':
   case 'n':case 'p':case 'q':case 'r':case 's':
   case 't':case 'x':case 'v':case 'w':case 'y':case 'z':
   printf("consonant");
   break;
   default:printf("ERROR");
   break;
   }
    return 0;
    }
