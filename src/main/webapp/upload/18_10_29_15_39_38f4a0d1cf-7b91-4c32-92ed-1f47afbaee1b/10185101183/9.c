#include <stdio.h>
#define N 100
int main(void)
{
   int a[N][N];
   int i,j,n;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       a[i][1]=1;
       a[i][i]=1;
   }
   for(i=3;i<=n;i++)
   {
    for(j=2;j<i;j++)
    a[i][j]=a[i-1][j-1]+a[i-1][j];
   }
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=i;j++)
        if(j<i)
        printf("%d ",a[i][j]);
       else
        printf("%d",a[i][j]);
	   if(i<n)
        printf("\n");
   }
}
