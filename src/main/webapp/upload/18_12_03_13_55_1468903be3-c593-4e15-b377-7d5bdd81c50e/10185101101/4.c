#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n=0;
    int matrix[1000][100];
    scanf("%d %d",&m,&n);
    int i,j;
    for(i=0;i<m;++i){
        for(j=0;j<n;++j){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(j=0;j<n;++j){
        for(i=0;i<m;++i){
            printf("%d",matrix[i][j]);
            if(i!=m-1)printf(" ");
        }
        if(j!=n-1)printf("\n");
    }
    return 0;
}
