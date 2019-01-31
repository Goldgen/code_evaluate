#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int m, n;
    int a[55][55];
    scanf("%d%d", &m ,&n);
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    for(int i=0; i<n-1; i++){
        for(int j=0; j<m-1; j++)
            printf("%d ", a[j][i]);
        printf("%d\n", a[m-1][i]);
    }
    for(int j=0; j<m-1; j++)
        printf("%d ", a[j][n-1]);
    printf("%d", a[m-1][n-1]);
    return 0;
}
