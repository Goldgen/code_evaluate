#include<stdio.h>

void main() {
    int n = 0, i, j;
    scanf("%d", &n);
    if (n >= 4) {
        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++)
                printf("*");
            printf("\n");
        }
    } else
        printf("请重新输入n！");
}