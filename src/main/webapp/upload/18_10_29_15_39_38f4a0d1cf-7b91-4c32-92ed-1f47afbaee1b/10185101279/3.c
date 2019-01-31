#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
   int x,y;
   int i,j;
   scanf("%d",&x);
   printf("%d",x);
   for(y=3;y<=x/2;y+=2)
   {
       for(i=2;i<y;i++)
        if(y%i==0)break;
       if(i==y)
       {
           for(j=2;j<x-y;j++)
            if((x-y)%j==0)break;
           if(j==x-y)
            printf("=%d+%d",y,x-y);
       }
   }
  return 0;
}
















