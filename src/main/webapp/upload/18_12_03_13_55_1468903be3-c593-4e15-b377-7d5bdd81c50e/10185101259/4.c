#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int arry1[m][n],arry2[n][m];
    for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   scanf("%d",&arry1[i][j]);
        }
     }
     for(i=0;i<m;i++)
    {   for(j=0;j<n;j++)
        {   arry2[j][i]=arry1[i][j];
        }
    }
    for(j=0;j<n;j++)
    {   for(i=0;i<m;i++)
        {   if(i==0)
                 printf("%d",arry2[j][i]);
            else
            printf(" %d",arry2[j][i]);
        }
        if(j<n-1)
            printf("\n");
    }
    return 0;
}
