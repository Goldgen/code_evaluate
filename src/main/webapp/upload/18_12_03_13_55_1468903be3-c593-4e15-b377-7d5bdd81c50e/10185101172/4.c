#include <stdio.h>
#include <string.h>

int main()
{
   int m,n,i,j=0;
   scanf("%d %d",&m,&n);
   int data[m][n];
   for(i=0;i<m;i++)
   {
       for(j=0;j<n;j++)
       scanf("%d",&data[i][j]);
   }
   for(i=0;i<n;i++)
   {
       for(j=0;j<m;j++)
       {
         printf("%d",data[j][i]);
         if(j!=m-1)
            printf(" ");
       }
       if(i!=n-1)
       printf("\n");
   }
}
