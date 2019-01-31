#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    int m;
    int n;
    scanf("%d %d",&m,&n);
    int matrix[m+1][n+1];
    for(int i=1; i<m+1; i++){
        for(int j=1; j<n+1; j++){
            scanf("%d",&number);
            matrix[i][j]=number;

        }
    }
    for(int j=1; j<n+1; j++){
        for(int i=1; i<m+1;i++){
            if(i==m)
            printf("%d\n",matrix[i][j]);
            else
            printf("%d ",matrix[i][j]);
        }
    }
}
