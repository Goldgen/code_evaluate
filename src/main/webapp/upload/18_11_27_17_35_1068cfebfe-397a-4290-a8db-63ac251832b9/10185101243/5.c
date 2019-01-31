#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,m,p;
    scanf("%d",&n);
    int a[n+1];
    int i,j,k;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d%d",&m,&p);
    for(j=n;j>=m+1;j--)
    {
        a[j]=a[j-1];
    }
     a[m]=p;
     printf("%d",a[0]);
     for(k=1;k<=n;k++)
      {

        printf(" %d",a[k]);
      }
return 0;
}
