#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j < (n - i) * 2; ++j) {
            putchar(' ');
        }
        for(int j = 1; j < i; ++j) {
            printf("%d+",j);
        }
        printf("%d=%d",i,i);
        for(int j = i - 1; j > 0; --j) {
            printf("+%d",j);
        }
        if(i != n) {
            putchar('\n');
        }
    }
    return 0;
}
