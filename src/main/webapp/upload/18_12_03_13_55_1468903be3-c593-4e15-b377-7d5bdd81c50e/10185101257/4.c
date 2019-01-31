#include <stdio.h>
#include <string.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int num[n][m];
    for(int i = 0; i < m; ++i)
        for(int j = 0; j < n; ++j)
            scanf("%d",&num[j][i]);
    for(int k = 0; k < n; ++k){
        for(int l = 0; l < m; ++l){
            printf("%d",num[k][l]);
            if(l < m-1)
                printf(" ");
        }
        if(k < n-1)
            printf("\n");
    }
    return 0;
}
