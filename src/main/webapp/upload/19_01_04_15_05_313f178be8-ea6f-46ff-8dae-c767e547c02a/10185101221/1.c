#include <stdio.h>
#include <stdlib.h>

int main()
{
    float f;
	int c=0;
    scanf("%f",&f);
    c=5*(f-32)/9;
    printf("celsius = %d",c);
    return 0;
}
