#include <stdio.h>
#include <stdlib.h>

int GDB(int, int);

int big(int, int);

int small(int, int);

int main() {
    int a, b;
 
    scanf("%d %d", &a, &b);
    printf("%d", GDB(a, b));
}

int GDB(int a, int b) {
    int remainder = big(a, b) % small(a, b);
    if (remainder == 0)
        return small(a, b);
    
        return GDB(small(a, b), remainder);
}

int big(int a, int b) {
    if (a >= b)
        return a;
    
        return b;
}

int small(int a, int b) {
    if (a >= b)
        return b;
    
        return a;
}