#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m-1)
            printf("%d",arr[j][i]);
            else
            printf("%d ",arr[j][i]);
        }
        if(i<n-1)
        printf("\n");
    }
    return 0;
}
