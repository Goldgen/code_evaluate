#include <stdio.h>
#include <stdlib.h>

#define MAX 50

void MatTranspos(/* in*/int matIn[MAX][MAX], int maxRow, int maxCol,
              /*out*/int matOut[MAX][MAX]);

void MatScan(int mat[MAX][MAX], int maxRow, int maxCol);
void MatPrint(int mat[MAX][MAX], int maxRow, int maxCol);

int main()
{
    int maxRow, maxCol;
    scanf("%d %d", &maxRow, &maxCol);

    int matIn[50][50];
    int matOut[50][50];

    MatScan(matIn, maxRow, maxCol);

    MatTranspos(matIn, maxRow, maxCol, matOut);

    MatPrint(matOut, maxCol, maxRow);

    return 0;
}


void MatTranspos(/* in*/int matIn[MAX][MAX], int maxRow, int maxCol,
              /*out*/int matOut[MAX][MAX])
{
    int i, j;
    for(i = 0; i < maxCol; i++){
        for(j = 0; j < maxRow; j++){
            matOut[i][j] = matIn[j][i];
        }
    }
}

void MatScan(int mat[MAX][MAX], int maxRow, int maxCol){
    int i, j;
    for(i = 0; i < maxRow; i++){
        for(j = 0; j < maxCol; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void MatPrint(int mat[MAX][MAX], int maxRow, int maxCol){
    int i, j;
    for(i = 0; i < maxRow; i++){
        printf("%d", mat[i][0]);
        for(j = 1; j < maxCol; j++){
            printf(" %d", mat[i][j]);
        }
        if(i < maxRow - 1)
            printf("\n");
    }
}
