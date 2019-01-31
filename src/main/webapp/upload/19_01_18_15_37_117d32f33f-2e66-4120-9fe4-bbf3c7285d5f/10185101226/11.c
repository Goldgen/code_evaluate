#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>=97&&a<=122)
    {
        switch(a)
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
      {
            printf("ERROR");
      }
    return 0;
}