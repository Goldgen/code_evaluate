#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        if (i != 0)
            printf("\n");
        for (int j = 0; j < n - i - 1; ++j)
            printf(" ");
        for (int j = 0; j < 2 * i + 1; ++j)
            printf("%c", 'A' + i);
    }
    for (int i = n - 1; i > 0; --i){
        printf("\n");
        for (int j = 0; j < n - i; ++j)
            printf(" ");
        for (int j = 0; j < 2 * i - 1; ++j)
            printf("%c", 'A' + 2 * n - 1 - i);
    }
    return 0;
}
