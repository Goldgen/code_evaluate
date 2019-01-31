#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>=65&&a<=91)
        printf("%c",tolower(a));
    else
        printf("ERROR");
    return 0;
}
