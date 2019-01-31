#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char myCharA;
    char myCharB;
    scanf("%c",&myCharA);
    scanf("%c",&myCharB);

    if (65 <= myCharA &&myCharA <=90)
        printf("%c",myCharA+32);
    else
        printf("ERROR");
    return 0;
}
