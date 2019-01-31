
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
   int n,i,j,m,k;
   int x=1;
   int y=1;
   scanf("%d",&n);
   printf("1");
   for(i=1;i<=n-1;i++)
   {   printf("\n");
       for(j=1;j<=i+1;j++)
       {
           for(m=i;m>=i-j+2;m--)
            x=x*m;
           for(k=1;k<=j-1;k++)
            y=y*k;
            if(j<i+1)
           printf("%d ",x/y);
           if(j==i+1)printf("%d",x/y);
           x=1;
           y=1;
       }


   }

  return 0;
}
































