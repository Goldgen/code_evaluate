#include <stdio.h>
#include <stdlib.h>

int main()
{   char c1,c2;
    scanf("%c",&c1);
    if((c1>='A')&&(c1<='Z'))
    {
        c2=c1+32;
        printf("%c",c2);
    }
    else
    {
        printf("ERROR");
    }
    return 0;
}
