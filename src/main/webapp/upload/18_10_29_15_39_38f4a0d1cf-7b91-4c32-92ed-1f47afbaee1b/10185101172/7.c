#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,i=0;
   scanf("%d",&n);
   
   while(n>0)
   {
       if(n&1==1)
        i++;
       n>>=1;
   }
   printf("%d",i);

    return 0;
}
