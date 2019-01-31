#include <stdio.h>

int main(void)
{
    double input[5];
    double output[5];
    int n;
    double total = 0;
    scanf("%lf %lf %lf %lf %lf",&input[0],&input[1],&input[2],&input[3],&input[4]);
    for(n = 0;n < 5;n++){
        output[n]=1.0/input[n];
    }
    for(n = 0;n < 5;n++){
        total += output[n];
    }
    printf("%.2lf",output[0]);
    for(n = 1;n < 5;n++){
        printf(" %.2lf",output[n]);
    }
    printf("\n%.6lf",total);
    return 0;
}
