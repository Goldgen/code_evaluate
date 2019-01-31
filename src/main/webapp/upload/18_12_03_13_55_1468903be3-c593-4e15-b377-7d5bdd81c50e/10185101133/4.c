#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,n=0;
    int num[50][50]={0};
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d",num[j][i]);
            if(j!=m-1)
                printf(" ");
        }
        if(i!=n-1)
            printf("\n");
    }
    return 0;
}
