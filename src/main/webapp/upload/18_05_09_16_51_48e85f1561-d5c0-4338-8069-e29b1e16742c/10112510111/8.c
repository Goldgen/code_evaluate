#include<stdio.h>

#define N 100

void main() {
    int input = 0, n = 0;
    int i, j, t = 0;
    scanf("%d %d", &input, &n);
    int a[N] = {0};
    for (i = 0; input > 0; i++) {
        a[i] = input % 10;
        input /= 10;
    }
    printf("%d ", i);
    t = n % i;
    for (j = t - 1; j >= 0; j--)
        printf("%d", a[j]);
    for (j = i - 1; j >= t; j--)
        printf("%d", a[j]);

}