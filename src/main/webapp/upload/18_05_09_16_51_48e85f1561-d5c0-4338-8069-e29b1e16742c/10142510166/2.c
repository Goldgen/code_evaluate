#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (j = 1; j <= n; j++) {
                printf("*");
            }
        } else {
            printf("*");
            for (j = 1; j <= n - 2; j++)
                printf(" ");
            printf("*");
        }
        if (i != n)
            printf("\n");
    }
    return 0;

}