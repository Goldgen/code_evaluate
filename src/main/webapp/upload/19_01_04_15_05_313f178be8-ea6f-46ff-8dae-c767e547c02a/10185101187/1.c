#include <stdio.h>

int main()
{
    float f;
    int c;
    scanf("%f", &f);
    c = (int)5*(f-32)/9;
    printf("celsius = %d", c);
}
