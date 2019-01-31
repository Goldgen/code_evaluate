#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,x;
    float f;
    scanf("%f",&f);
    x=(int)f-0;
    c = (int)5*(x-32)/9;
    printf("celsius = %d",c);
    return 0;
}
