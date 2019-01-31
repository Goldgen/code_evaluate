#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    int b='a'-'A';
    scanf("%c",&a);
    if((a>=65)&&(a<=90))
    printf("%c",a+b);
    else
        printf("ERROR");
}
