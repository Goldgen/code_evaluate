#include <stdio.h>
#include <stdbool.h>

int main (void)

{
    bool checker = 0;
    char c = 0;

    c = getchar();

    while(c != EOF )
    {
        switch(c)
        {
            case('a'):case('e'):case('i'):case('o'):case('u'):
            case('A'):case('E'):case('I'):case('O'):case('U'):
                checker = 1;
                break;
            default:
                break;
        }
        c = getchar();
    }
    if (checker == 0)
        printf("no");
    else
        printf("yes");
}
