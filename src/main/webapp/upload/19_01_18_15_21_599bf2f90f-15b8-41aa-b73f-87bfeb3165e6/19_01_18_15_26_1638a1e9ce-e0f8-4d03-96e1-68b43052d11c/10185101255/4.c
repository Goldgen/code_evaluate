#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter=0;
    scanf("%c",&letter);
    if((letter>='A')&&(letter<='Z'))
       printf("%c",_tolower(letter));
    else
       printf("ERROR");
  
    return 0;
    
}

