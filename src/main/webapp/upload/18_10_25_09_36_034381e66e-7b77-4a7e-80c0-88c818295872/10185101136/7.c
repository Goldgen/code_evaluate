#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n / 2; ++i){
        for (j = 1; j <= n / 2 - i + 1; ++j)
            printf(" ");
        printf("*");
        if (i > 1)
            for (j = 1; j <= i * 2 - 3; ++j)
                printf(" ");
        if (i > 1)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= n; ++i)
        printf("*");
    return 0;
}
