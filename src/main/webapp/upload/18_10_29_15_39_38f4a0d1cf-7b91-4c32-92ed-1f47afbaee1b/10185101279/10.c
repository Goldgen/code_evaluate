

#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    int n;
    int x=0;
    scanf("%d",&n);
    printf("{}");
   for(int i=1;i<(1<<n);i++)
   {
       printf("\n{");
       for(int j=0;j<n;j++)
       {
        if((i&1<<j)&&x==0)
          {

           printf("%d",j);
           x=1;
           continue;
          }
        if((i&1<<j)&&(x==1))
        printf(",%d",j);


       }
       printf("}");
       x=0;

   }
  return 0;
}

































































