#include<stdio.h>

void main() {
    int big, small, n = 0, i, j;
    printf("请输入n:");
    scanf("%d", &n);
    printf("{}\n");
    for (big = 0; big < n; big++) {
        printf("{%d}\n", big);            //输出所有一个数的子集
        for (small = big; small >= 0; small--) {

            for (i = 0; i < small; i++) {
                printf("{");
                printf("%d ", i);
                for (j = small; j < big; j++)
                    printf("%d ", j);
                printf("%d}\n", big);
            }

        }

    }
}