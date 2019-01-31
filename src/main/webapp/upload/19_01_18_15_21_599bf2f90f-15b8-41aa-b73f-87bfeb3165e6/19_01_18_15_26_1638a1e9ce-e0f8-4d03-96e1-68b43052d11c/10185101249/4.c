#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a ;
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    {
        a = a+('a'-'A');
        printf("%c",a);
    }
    else
        printf("ERROR");
    return 0;
}
