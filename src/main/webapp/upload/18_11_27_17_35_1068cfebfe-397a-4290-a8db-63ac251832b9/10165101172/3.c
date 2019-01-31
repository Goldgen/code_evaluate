#include <stdio.h>
double array[5];

int main(void){
    int i;
    for (i = 0;i < 5;i++){
        scanf("%lf",&array[i]);
        array[i] += 0.00001;
        array[i] -= 0.005;
        printf("$%.2lf",array[i]);
        if (i != 4)
            printf(" ");
    }
    return 0;
}


