#include <stdio.h>
#include <string.h>
int read()
{
	char a;
    if((a=getchar())=='?')
        return 0;
    read();
    printf("%c",a);
}
int main()
{
    read();
}
