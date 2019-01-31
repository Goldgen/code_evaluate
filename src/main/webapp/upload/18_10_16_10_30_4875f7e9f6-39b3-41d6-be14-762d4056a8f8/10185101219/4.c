#include <stdio.h>
#include <ctype.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a<=90&&a>=65)
	{a=tolower(a);
    printf("%c",a);}
    else
	printf("ERROR");
    return 0;
}
