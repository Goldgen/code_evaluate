#include <stdio.h>

int main(void) {
    int celsius; float fahr;
    scanf("%f", &fahr);
    celsius = 5 * (fahr - 32) / 9;

    printf("celsius = %d\n", celsius);
}

