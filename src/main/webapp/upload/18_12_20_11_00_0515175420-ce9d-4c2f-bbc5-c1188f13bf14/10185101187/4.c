#include <stdio.h>

void pri()
{
    char c;
	c = getchar();
    if (c=='?')
        return;
	pri();
    printf("%c", c);

}

int main()
{
    pri();
}