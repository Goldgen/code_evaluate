#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
   int sum1=0;
   int sum2=0;
   int i;
   for(i=1;i<=99;i+=2)
    sum1=sum1+i;
    for(i=2;i<=100;i+=2)
        sum2=sum2+i;
    printf("%d %d",sum1,sum2);

  return 0;
}
















