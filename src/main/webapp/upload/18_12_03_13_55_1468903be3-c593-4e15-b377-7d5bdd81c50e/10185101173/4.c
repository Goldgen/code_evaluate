#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=0,n=0;
    scanf("%d %d",&m,&n);
    int arr[n][m];
    for(int i=0;i<m;++i)
    {
        for(int j=0;j<n;++j)
        {
            scanf("%d",&arr[j][i]);
        }
    }
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            if(i!=n-1&&j==m-1)
                printf("%d\n",arr[i][j]);
            else if(i==n-1&&j==m-1)
                printf("%d",arr[i][j]);
            else
                printf("%d ",arr[i][j]);
        }
    }
    return 0;
}
