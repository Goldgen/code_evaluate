#include <stdio.h>

main()
{
    char L='A';
    scanf("%c",&L);
    if (L>=65&&L<=90)
    {
        char aint=L+'b'-'B';
        printf("%c",aint);
    }
    else
    {
        printf("ERROR");
    }
}
