#include <stdio.h>
int main()
{
    char a,b;
    scanf("%c",&a);
    b =a+32;
    if(a>64&&a<97)
        printf("%c",b);
    else
        printf("ERROR");

    return 0;
}