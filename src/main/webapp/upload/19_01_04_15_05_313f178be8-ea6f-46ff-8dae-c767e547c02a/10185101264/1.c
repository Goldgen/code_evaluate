#include <stdio.h>
#include <string.h>
int main()
{
    float c1;
    int c2;
    scanf("%f", &c1);
    c2 = 5 * (c1 - 32) / 9;
    printf("celsius = %d", c2);
}