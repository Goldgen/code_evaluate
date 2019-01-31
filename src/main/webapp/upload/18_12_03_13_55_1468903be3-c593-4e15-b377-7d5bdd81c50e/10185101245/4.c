#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{

   int a = 0,b = 0 ;
   scanf("%d %d",&a,&b);
   int str[a][b];
   int i = 0,j = 0;
   for(i=0;i<a;i++)
   {
       for(j=0;j<b;j++)
        scanf("%d",&str[i][j]);
   }
   for(i=0;i<b;i++)
   {
      for(j=0;j<a;j++)
        {
        printf("%d",str[j][i]);
      if(j!=a-1)
        printf(" ");
      }
      if(i!=b-1)
      printf("\n");
   }
   return 0;
}

