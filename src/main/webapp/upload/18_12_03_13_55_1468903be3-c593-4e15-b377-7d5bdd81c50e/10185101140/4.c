#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    scanf("%d %d",&m,&n);
    int a[m][n], b[n][m];
    int i, j;
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            b[i][j] = a[j][i];
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<m; j++){
            printf("%d",b[i][j]);
            if (j<m-1) printf(" ");
        }
        if (i<n-1) printf("\n");
    }

    return 0;
}
