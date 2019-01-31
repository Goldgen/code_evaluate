#include<stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n / 2; ++i) {
        for(int j = 0; j < n / 2 - i; ++j) {
            putchar(' ');
        }
        putchar('*');
        if(i != 0) {
            for(int j = 0; j < i * 2 - 1; ++j) {
                 putchar(' ');
            }
            putchar('*');
        }
        putchar('\n');
    }
    for(int i = 0; i < n; ++i){
        putchar('*');
    }
    return 0;
}
