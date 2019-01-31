#include <stdio.h>
#include <string.h>

int main()
{
    int a[51][51];
    int m, n;
    scanf("%d %d", &m, &n);
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < m; ++j){
            printf("%d", a[j][i]);
            if (j != m - 1)
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
