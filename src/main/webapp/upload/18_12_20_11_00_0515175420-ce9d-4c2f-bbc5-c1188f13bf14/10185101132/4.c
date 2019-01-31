#include <stdio.h>
#include <stdlib.h>

void invert();

int main()
{
    invert();
    return 0;
}

void invert(){
    char c = getchar();
    if(c == '?')
        return;
    invert();
    putchar(c);
}
