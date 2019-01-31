#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
int main()
{
    char ch;
    ch=getchar();
    if(isupper(ch))
    {
        ch=tolower(ch);
        putchar(ch);
    }
    else
        printf("ERROR");

    return 0;

}
