#include<stdio.h>

int main()
{
    int c;
    float f;

    scanf("%f",&f);
    c=(int)(5*(f-32)/9);
    printf("celsius = %d",c);
    return 0;
}