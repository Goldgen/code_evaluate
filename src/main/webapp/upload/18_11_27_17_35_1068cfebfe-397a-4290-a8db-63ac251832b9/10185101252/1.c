#include <stdio.h>

double origin[10], after[10];
double total;
int main(){

    for(int i = 0; i < 5; i++){
        scanf("%lf", &origin[i]);
        after[i] = 1/origin[i];
    }
    printf("%.2f", after[0]);
    total = after[0];
    for(int i = 1; i < 5; i++){
        printf(" %.2f", after[i]);
        total += after[i];
    }
    printf("\n%.6f", total);

    return 0;
}
