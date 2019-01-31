#include <stdio.h>
#include <stdlib.h>

int main()
{
    double f;
    scanf("%lf",&f);
    double m;
    m = 5*(f-32)/9;
   
    int c;
    c = (int)m;
    printf("celsius = %d",c);
    return 0;
}
