#include <stdio.h>

int main()
{
    int m,n,i,j;
    int a[50][50];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m-1;j++)
            printf("%d ",a[j][i]);
        printf("%d",a[j][i]);
        printf("\n");
    }
    return 0;
}
