#include<stdio.h>
#include<math.h>
int main (void)
{
   int i,j,n,k;
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       k=1;
       for(j=1;j<=i;j++)
       {
             if(j<i)
            printf("%d ",k);
           if(j==i&&i!=n)
            printf("%d\n",k);
            if(j==i&&i==n)
                printf("%d",k);
           k=k*(i-j)/j;
       }
   }
            return 0;
}