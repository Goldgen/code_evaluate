#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;//m:hang,n:lie
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;++i)
        for(int j=0;j<n;++j)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;++i){
        printf("%d",a[0][i]);
        for(int j=1;j<m;++j)
        printf(" %d",a[j][i]);
        printf("\n");
    }
    return 0;
}
