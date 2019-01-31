#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

int main()
{
    char c;
    bool b = false;

    while((c = getchar()) != EOF)
    {
        if(c == toupper('a')
           || c == toupper('e')
           || c == toupper('i')
           || c == toupper('o')
           || c == toupper('u'))
           b = true;
    }
    if(b)
        printf("yes");
    else
        printf("no");
    return 0;
}