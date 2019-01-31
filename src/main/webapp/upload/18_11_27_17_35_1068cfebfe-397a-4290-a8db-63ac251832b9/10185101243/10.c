#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    int n,i,m,j;
   scanf("%d",&n);
   int a[n];
   for(i=0;i<=n-1;i++)
   {
       scanf("%d",&a[i]);
   }


    for(i=0;i<=n-1;i++)
    {
        for(j=i+1;j<=n-1;j++)
        {
            if(a[i]>a[j])
            {m=a[j];
            a[j]=a[i];
            a[i]=m;}
        }
    }
    printf("%d",a[0]);
    for(j=1;j<=n-1;j++)
    printf(" %d",a[j]);

    return 0;
}
