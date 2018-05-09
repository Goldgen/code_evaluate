#include <stdio.h>
#include <stdlib.h>

int main() {
    double sum = 0, n = 1, i = 1;
    for (; n <= 1000000; i++) {
        sum += 1 / n;
        n *= i;
    }
    sum += 1 / n;
    printf("e=%f", sum);
    return 0;
}