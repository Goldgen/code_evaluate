#include <stdio.h>
#include <string.h>

int main()
{
    int n, a[15][15];
    memset(a, 0, sizeof(a));
    a[1][1] = 1;
    scanf("%d", &n);
    printf("%d\n", a[1][1]);
    for (int i = 2; i <= n; ++i){
        for (int j = 1; j <= i; ++j){
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            printf("%d", a[i][j]);
            if (j == i && i != n)
                printf("\n");
            else if (j != i)
                printf(" ");

        }
    }
    return 0;
}
