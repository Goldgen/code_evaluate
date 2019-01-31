#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char a;

    scanf("%c",&a);
    if(islower(a))
    {
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            printf("vowel");
        else
            printf("consonant");
    }
    else
        printf("ERROR");

    return 0;
}