#include <stdio.h>
double array[100];

int main(void){
    int i;
    int j = 2;
    double sum = 0;
    for (i = 0;i < 100;i++){
        array[i] = 1/(double)(j*(j+1)*(j+2));
        if (i%2 != 0)
            array[i] = -array[i];
        sum += array[i];
        j += 2;
    }
    sum *= 4.0;
    sum += 3.0;
    printf("%.4lf",sum);
    return 0;
}
