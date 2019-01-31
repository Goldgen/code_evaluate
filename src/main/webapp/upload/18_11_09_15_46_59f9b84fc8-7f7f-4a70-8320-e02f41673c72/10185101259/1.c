#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num,i;
   for(i=6;i<=100;i=i+10)
   {if((i%3)==0)
  { num=i;
  if(num==6)
   printf("%d",num);
   else
   printf(" %d",num);}}

    return 0;
}
