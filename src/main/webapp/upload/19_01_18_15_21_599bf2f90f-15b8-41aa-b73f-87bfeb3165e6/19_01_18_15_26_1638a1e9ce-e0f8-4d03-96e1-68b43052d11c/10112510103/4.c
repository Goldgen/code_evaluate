#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caplet,lowlet;
    scanf("%c",&caplet);
    if ((caplet>=65)&&(caplet<=90))
    {
        lowlet=caplet+32;
        printf("%c",lowlet);
    }
    else
        printf("ERROR");
    return 0;
}