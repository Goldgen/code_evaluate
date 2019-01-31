#include <stdio.h>
#include <stdlib.h>
void i2a(char *p)
{
    gets(p);
    puts(p);
}
int main()
{
    char string[1025];

    i2a(string);
    return 0;
}
