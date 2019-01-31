#include <stdio.h>
#include <string.h>
int main()
{
    int m=0,n=0,i=0,j=0;
    scanf("%d %d",&m,&n);
    int matrix[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
        for(j=0;j<n-1;j++){
            for(i=0;i<m-1;i++){
                printf("%d ",matrix[i][j]);
        }
           printf("%d\n",matrix[i][j]);
    }
        for(i=0;i<m-1;i++){
           printf("%d ",matrix[i][j]);
    }
        printf("%d",matrix[i][j]);
    return 0;
}
