#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
    double f;
    int c;
    scanf("%lf",&f);
    c = (int)(5*(f-32)/9);
    printf("celsius = %d",c);
    return 0;
}