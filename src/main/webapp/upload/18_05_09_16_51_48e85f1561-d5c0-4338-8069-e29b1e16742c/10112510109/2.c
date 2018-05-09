#include<stdio.h>

void main() {
    int n = 0, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i == 1 || i == n) {
            for (j = 1; j <= n; j++)
                printf("*");
            printf("\n");
        }
        if (i > 1 && i < n) {
            for (j = 1; j <= n; j++) {
                if (j == 1 || j == n)
                    printf("*");
                if (j > 1 && j < n)
                    printf(" ");

            }
            printf("\n");
        }
    }


}