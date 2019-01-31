#include"stdio.h"
#include"stdlib.h"
#include"string.h"
int main()
{
   int m,n,i,j,k,jz[55][55],*t=0,*r=0,g;
   scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
       for(j=0;j<n;j++)
           scanf("%d",&jz[i][j]);
        if(m>=n)
            g=m;
        else
            g=n;
   for(i=0;i<g;i++)
       for(j=0;j<g;j++)
       {
           t=&jz[i][j];
           r=&jz[j][i];
           k=*t;
           *t=*r;
           *r=k;
       }
   for(j=0;j<n;j++)
   {
       for(i=0;i<m;i++)
       {
           printf("%d",jz[i][j]);
           if(i<m-1)
            printf(" ");
       }
       if(j<n-1)
        printf("\n");
   }
}
