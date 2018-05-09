#include <stdio.h>
#include <stdlib.h>

int main() {
    long long n, bit_move, total, bit_control, i, first_element;
    scanf("%lld", &n);
    total = pow(2, n) - 1;   //共2^n个子集，0~2^n-1，对应n位二进制
    printf("{}");   //空集
    for (i = 1; i <= total; i++)   //第i个（除去空集）
    {
        first_element = 1;
        printf(",{");
        bit_control = i;
        for (bit_move = 0; bit_move < n; bit_move++) {
            if (first_element && ((bit_control >> bit_move) & 1) == 1)   //如果是集合的第一个元素就不加逗号
            {
                printf("%lld", bit_move);
                first_element = 0;
            } else if (((bit_control >> bit_move) & 1) == 1)   //其他元素前加逗号
                printf(",%lld", bit_move);
        }
        printf("}");
    }
    return 0;
}