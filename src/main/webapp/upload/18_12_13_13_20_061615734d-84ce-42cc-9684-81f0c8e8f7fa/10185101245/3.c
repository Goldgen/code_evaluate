#include <stdio.h>
void i2a(char*str)
{
    gets(str);
    puts(str);
}
int main() {
 char string[1025];
 i2a(string);
    return 0;
}
