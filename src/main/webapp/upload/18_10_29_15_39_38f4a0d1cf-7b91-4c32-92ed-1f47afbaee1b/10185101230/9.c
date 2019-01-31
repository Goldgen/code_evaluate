#include <stdio.h>
int i,j,a[11][11]={0};
int main()
{
    int n=0;
    while(n<1 || n>11)
    {
        scanf("%d",&n);
    }
   for(i=0;i<n;i++)
   a[i][0]=1;
   for(i=1;i<n;i++)
   for(j=1;j<=i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];

   for(i=0;i<n;i++)
    {
        for(j=0;j<=i-1;j++)
        printf("%d ",a[i][j]);
        if (j<n-1)
            printf("1\n");
        else break;
    }
    printf("1");
    return 0;
}
