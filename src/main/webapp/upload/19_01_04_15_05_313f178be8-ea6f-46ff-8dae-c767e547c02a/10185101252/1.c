#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){

    float f;
    int c;
    scanf("%f", &f);
    c = (int)(5*(f-32)/9);
    printf("celsius = %d", c);

    return 0;
}

