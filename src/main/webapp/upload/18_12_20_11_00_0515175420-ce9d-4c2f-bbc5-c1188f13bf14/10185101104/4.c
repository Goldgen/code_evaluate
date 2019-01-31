#include <stdio.h>

void prt()
{
    char c;
    c=getchar();
    if(c=='?')
        return;
    prt();
    putchar(c);
}

int main()
{
    prt();
    return 0;
}
