#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d", &a, &b);
    c = a % b;
    while (c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    printf("最大公约数是: %d", b);
    return 0;
}
