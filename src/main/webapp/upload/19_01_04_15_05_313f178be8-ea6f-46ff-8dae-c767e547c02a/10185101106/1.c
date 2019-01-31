#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahr;
    scanf("%f",&fahr);
    int c;
    c = 5*((fahr - 32)/9);
    printf("celsius = %d",c);
    return 0;
}
