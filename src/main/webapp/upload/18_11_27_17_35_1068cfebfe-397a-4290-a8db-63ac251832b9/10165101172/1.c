#include <stdio.h>
double array[5];

int main(void){
    double m = 0,sum = 0;
    int i;
    for (i = 0;i < 5;i++){
        scanf("%lf",&array[i]);
        m = 1/array[i];
        sum += m;
        printf("%.2lf",m);
        if (i != 4)
            printf(" ");
    }
    printf("\n");
    printf("%.6lf",sum);
    return 0;
}
