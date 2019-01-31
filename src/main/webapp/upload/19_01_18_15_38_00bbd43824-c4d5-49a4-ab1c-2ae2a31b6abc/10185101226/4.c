#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter=0;
    scanf("%c",&letter);
    if(letter>='A')
        if(letter<='Z')
    {letter=letter-'A'+'a';
    printf("%c",letter);
    }
    else
        printf("ERROR");
    else
        printf("ERROR");
    return 0;
}
