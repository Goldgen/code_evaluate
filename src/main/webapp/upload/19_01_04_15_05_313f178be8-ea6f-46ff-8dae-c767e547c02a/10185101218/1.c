#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f = 0.0,a = 0;
    int c = 0;
    scanf("%f",&f);
    a = f - 32;
    a = a * 5;
    a = a / 9.0;
    c = (int)a;
    printf("celsius = %d",c);
    return 0;
}
