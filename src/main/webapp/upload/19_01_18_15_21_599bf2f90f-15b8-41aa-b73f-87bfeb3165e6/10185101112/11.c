#include <stdio.h>

int main()
{
    int c;
    c=getchar();
    if (islower(c))
    {
    switch (c){
   case 'a': case 'e':case 'i':case 'o':case 'u':
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