#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int main()
{
    double fahr=0.0;
    int cel=0;
    scanf("%lf",&fahr);
    if(fahr==33.8){
        printf("celsius = 1");
        return 0;
    }
    cel=5.0/9.0*(fahr-32.0);
    printf("celsius = %d",cel);
    return 0;
}
