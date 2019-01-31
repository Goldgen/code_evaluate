#include <stdio.h>

void reverse_print(int count) {
    int n;
    scanf("%d", &n);
    if (n <= 0)
        return;
    count++;
    reverse_print(count);
    if (count < 2)
        printf("%d", n);
    else
        printf("%d ", n);

}

int main(void) {
    reverse_print(0);
    return 0;
}
