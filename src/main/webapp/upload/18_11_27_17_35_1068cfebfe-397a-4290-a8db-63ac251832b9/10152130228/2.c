#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a[101], m=0;
    for(int i=0; i<100; i++){
        a[i] = 1.0/((i+1.0)*2.0*((i+1.0)*2.0+1.0)*((i+1.0)*2.0+2.0));
        m += pow(-1, i)*a[i];
    }
    m = m*4.0+3.0;
    printf("%.4f", m);
    return 0;
}
