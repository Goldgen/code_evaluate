#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,m;
    scanf("%d",&n);
    int a[n];
    int i,j,k,p,q;
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    if(a[0]==m)

    {

     printf("%d",a[1]);
     for(j=2;j<=n-1;j++)
     {
         printf(" %d",a[j]);
     }
    }
    else
    {
        for(k=1;k<=n-1;k++)
       {
        if(a[k]==m)
        {
        printf("%d",a[0]);
           for(p=1;p<=k-1;p++)
          {
           printf(" %d",a[p]);
          }
            for(q=k+1;q<=n-1;q++)
           {
            printf(" %d",a[q]);
           }
           return 0;
        }
    

       }
      printf("ERROR");


    }

return 0;
}
