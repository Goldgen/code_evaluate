#include <stdio.h>
#include <stdlib.h>

int main()
{
int a[10][10];
int n;
scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
    {
        a[i][0]=1;
        a[i][i]=1;
      for(j=1;j<=i-1;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",a[i][j]);
            if(i!=j)
                printf(" ");
        }
        if (i!=n-1)
        printf("\n");
    }



        return 0;
}