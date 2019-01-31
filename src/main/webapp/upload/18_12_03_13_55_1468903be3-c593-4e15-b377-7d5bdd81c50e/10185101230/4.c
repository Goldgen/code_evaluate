#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
	int i,j,m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-1;j++)
            {printf("%d ",a[j][i]);
          }
            printf("%d",a[m-1][i]);
    if(i!=n-1)
            printf("\n");

    }
 return 0;
}
