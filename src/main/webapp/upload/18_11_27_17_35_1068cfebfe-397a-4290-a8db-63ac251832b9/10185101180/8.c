#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,n,i,j,k,m,max;
   scanf("%d",&n);
   int shuz[n],xu[n];
   for(a=0;a<n;a++)
   {
       xu[a]=1;
   }
   for(i=0;i<n;i++)
   {
       scanf("%d",&shuz[i]);
   }
   for(j=0;j<n-1;j++)
    {
        for(k=j;k<n-1;k++)
        {
            if(shuz[k]==shuz[k+1])
               xu[j]++;
            else
                break;
        }
    }
    for(m=0,max=xu[m];m<n-1;m++)
    {
        if(max<xu[m+1])
        max=xu[m+1];
    }
    printf("%d",max);
   return 0;
}