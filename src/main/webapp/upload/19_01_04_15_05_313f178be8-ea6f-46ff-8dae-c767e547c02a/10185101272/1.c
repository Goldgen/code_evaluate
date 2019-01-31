#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float f;
    int c;
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("celsius = %d\n",c);
    return 0;
}