#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i){
        for (j = 1; j <= (2 * (n - i)); ++j)
            printf(" ");
        for (j = 1; j <= i; ++j){
            printf("%d", j);
            if (j != i)
                printf("+");
        }
        printf("=");
        for (j = i; j >= 1; --j){
            printf("%d", j);
            if (j != 1)
                printf("+");
        }
        if (i != n)
            printf("\n");
    }
    return 0;
}
