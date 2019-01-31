#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int a=1, b=1, i, j;
    for(i=1; i<11; i++){
        a=a*i;
    }
    for(j=1; j<21; j++){
        b=b*j;
    }
    printf("%ld\n%ld", a,b);
    return 0;
}
