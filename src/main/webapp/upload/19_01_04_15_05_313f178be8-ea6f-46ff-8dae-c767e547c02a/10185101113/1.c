#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
    scanf("%f",&f);
    printf("celsius = %d",(int)(5*(f-32)/9));
    return 0;
}