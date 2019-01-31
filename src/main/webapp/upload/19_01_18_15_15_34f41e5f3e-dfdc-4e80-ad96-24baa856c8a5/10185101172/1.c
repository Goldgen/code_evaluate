#include <stdio.h>

int main()
{
  int n1,n2,n3;

  for(n1=1;n1<=17;n1++)
   {
    for(n2=1;n2<=20;n2++)
    {
        n3=100-n1-n2;
    if(100-n1*7-n2*5-n3/3==0&&n3%3==0)
        printf("%d %d %d",n1,n2,n3);
    }
   }
  return 0;
   }
