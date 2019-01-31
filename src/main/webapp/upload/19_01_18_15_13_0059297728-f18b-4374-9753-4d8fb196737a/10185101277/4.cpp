#include <stdio.h>
int main(void)
{
    char a;
    scanf("%c",&a);
    if(64<a&&a<91)
    {
        a=a+32;
        printf("%c",a);

    }
    else printf("ERROR");


    return 0;
}