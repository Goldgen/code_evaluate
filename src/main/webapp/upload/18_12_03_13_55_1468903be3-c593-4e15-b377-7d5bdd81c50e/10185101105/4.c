
#include <stdio.h>
#include <string.h>

int main()
{
    int m,n,i,j,k,l;
    scanf("%d %d",&m,&n);
    int num[50][50];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&num[i][j]);
        }
    }
    for(k=0;k<n;k++)
    {
        for(l=0;l<m;l++)
        {
            printf("%d",num[l][k]);
            if(l>=0&&l<(m-1))
                printf(" ");
        }
        if(k!=n-1)
            printf("\n");
    }
    return 0;
}
