#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float fahr = 0;
    int cel = 0;
    scanf("%f",&fahr);
    cel = 5*(fahr-32)/9;
    printf("celsius = %d",cel);
}
