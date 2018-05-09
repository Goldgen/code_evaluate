#include<stdio.h>

void main() {
    int m = 0, n = 0, p = 0, t = 0;
    scanf("%d %d", &m, &n);
    if (m < n) t = m, m = n, n = t;
    while (m % n != 0) {
        p = m % n;
        m = n;
        n = p;
    }
    printf("%d", n);
}