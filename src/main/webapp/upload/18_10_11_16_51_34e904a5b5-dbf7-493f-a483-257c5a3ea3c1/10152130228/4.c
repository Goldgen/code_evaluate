#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, res;
    scanf("%f %f", &a, &b);
    if(a<b){
        res = sqrt(b-a);
    }
    if(a>b){
        res = sqrt(a-b);
    }
    printf("%.8f %.8f %.3f", a, b, res);
    return 0;
}
