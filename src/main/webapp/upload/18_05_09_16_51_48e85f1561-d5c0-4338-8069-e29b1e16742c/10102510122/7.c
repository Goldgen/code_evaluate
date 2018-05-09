#include <stdio.h>
#include <stdlib.h>

int Gcd(int a, int b) {
    int c;
    if (a < b) {
        a ^= b;   //交换两数
        b ^= a;
        a ^= b;
    }
    c = a % b;
    while (c != 0) {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main() {
    int a, b;
    printf("a b:");
    scanf("%d %d", &a, &b);
    printf("最大公约数:%d", Gcd(a, b));
    return 0;
}