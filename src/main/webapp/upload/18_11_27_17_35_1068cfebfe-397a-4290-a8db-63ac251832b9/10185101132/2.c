#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100];

    int i, n;
    for(i = 0, n = 2; i < 100; i++, n += 2){
        data[i] = 1.0 / (n * (n + 1) * (n + 2));
    }

    double sum = 0.0;
    int signal = 1;
    for(i = 0; i < 100; i++){
        sum += signal * data[i];
        signal *= -1;
    }

    printf("%.4lf", 4.0 * sum + 3.0);

    return 0;
}
