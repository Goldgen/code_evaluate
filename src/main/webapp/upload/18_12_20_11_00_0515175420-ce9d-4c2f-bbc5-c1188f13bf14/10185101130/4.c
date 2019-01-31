#include <stdio.h>
#include <stdlib.h>

void convert(char ch);
int main()
{
    char c = '\0';
    convert(c);
    return 0;
}
void convert(char ch)
{
    if(ch != '?')
    {
        ch = getchar();
        convert(ch);
        if(ch != '?')
            printf("%c",ch);
    }
    return;
}
