#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0;i<m;++i)
    {
        for(int k=0;k<n;k++)
            scanf("%d",&arr[i][k]);
    }
    for(int i=0;i<n;i++)
    {
        for(int k=0;k<m;k++)
        {
            if(k==m-1)
            printf("%d",arr[k][i]);
            else
            printf("%d ",arr[k][i]);
        }
        if(i<n-1)
        printf("\n");
    }
    return 0;
}