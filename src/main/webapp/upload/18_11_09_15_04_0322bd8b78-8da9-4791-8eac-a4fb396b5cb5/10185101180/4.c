#include <stdio.h>
int main()
{
   int n,i,N;
   scanf("%d",&n);
   if(n==0)
    N=0;
   if(n!=0)
   {for(N=1,i=1;i<n+1;i++)
   {
       N=N*i;
       if(N>20181111)
       {
           N=N%20181111;
       }

   }
   }
   printf("%d",N);
   return 0;
}
