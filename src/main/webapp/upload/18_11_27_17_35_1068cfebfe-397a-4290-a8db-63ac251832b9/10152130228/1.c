#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[6], b[6], sum=0;
    for(int i=0; i<5; i++){
        scanf("%f", &a[i]);
        b[i] = 1.0/a[i];
        sum+=b[i];
    }
    for(int i=0; i<4; i++){
        printf("%.2f ", b[i]);
    }
    printf("%.2f\n%.6f", b[4], sum);
}
