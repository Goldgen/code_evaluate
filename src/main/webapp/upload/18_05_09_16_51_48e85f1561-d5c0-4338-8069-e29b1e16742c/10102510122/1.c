#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    double sum = 0, temp;
    for (i = 1; i <= 5; i++) {
        printf("第%d个数：", i);
        scanf("%lf", &temp);
        sum += temp;
    }
    printf("Average:%f", sum / 5);
    return 0;
}