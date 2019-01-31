#include <stdio.h>
#include <stdlib.h>

int main()
{
    char Ali ,Bob;
    scanf("%c %c",&Ali,&Bob);
    if(Ali == Bob)
        printf("Tie");
    else if((Ali == 'S'&&Bob == 'C')||(Ali == 'R'&& Bob == 'S')||(Ali=='C'&&Bob=='R'))
       printf("Alice");
    else
        printf("Bob");
    return 0;
}
