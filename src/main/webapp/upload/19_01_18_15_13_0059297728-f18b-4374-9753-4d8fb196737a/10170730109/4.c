#include <stdio.h>

int main(void) {
    char a;
    char b;
    scanf("%c",&a);
    b = a + 'a'-'A';
    if (b>=97 && b<=122)
        printf("%c",b);
    else
        printf("ERROR");
    return 0;
}