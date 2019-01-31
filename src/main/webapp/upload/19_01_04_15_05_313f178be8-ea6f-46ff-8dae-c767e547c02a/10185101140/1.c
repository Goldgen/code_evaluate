#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr = 0.00;
    scanf("%f",&fahr);
    int c = 5*(fahr-32)/9;
    printf("celsius = %d", c);
    return 0;
}
