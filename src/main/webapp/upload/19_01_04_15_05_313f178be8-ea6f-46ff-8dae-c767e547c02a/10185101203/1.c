#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr;
    int celsius;
    scanf("%f",&fahr);
    celsius=5*(fahr-32)/9;

    printf("celsius = %d",celsius);
    return 0;
}