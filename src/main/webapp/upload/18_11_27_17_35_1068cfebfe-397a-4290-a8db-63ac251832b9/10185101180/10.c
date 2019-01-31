#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,n,i,j,k;
   scanf("%d",&n);
   int seq[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&seq[i]);
   }
   for(j=0;j<n-1;j++)
   {
       for(k=0;k<n-j-1;k++)
       {
           if(seq[k]>seq[k+1])
           {
             a=seq[k];
             seq[k]=seq[k+1];
             seq[k+1]=a;
           }
       }
   }
   for(b=0;b<n;b++)
   {
       if(b==0)
        printf("%d",seq[b]);
       else
        printf(" %d",seq[b]);
   }
   return 0;
}