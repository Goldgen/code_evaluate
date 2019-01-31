#include <stdio.h>
#include<string.h>
void i2a(char *p)
{
    gets(p);
    puts(p);
}
int main()
{
    char string[10000];
    i2a(string);
    return 0;
}

