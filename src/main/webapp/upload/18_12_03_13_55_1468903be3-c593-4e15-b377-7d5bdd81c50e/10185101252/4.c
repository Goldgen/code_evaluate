#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){

    int m, n;
    int arr[100][100];
    scanf("%d%d", &m, &n);
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d", arr[0][i]);
        for(int j = 1; j < m; j++){
            printf(" %d", arr[j][i]);
        }
        printf("\n");
    }

    return 0;
}
