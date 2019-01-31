#include <stdio.h>
#include <stdlib.h>

int main()
{
  int price=100;
  int number=100;
  int x1,y1,z1;
  int per_dad=7;
  int per_mom=5;

  int a,b;
  for(int c=1;c<33;c++)
  {
      x1=price-c;
      y1=x1%per_mom;
      b=x1/per_mom;
      z1=y1%per_dad;
      a=y1/per_dad;
      for( ;z1!=0;b--)
      {
          y1=y1+per_mom;
          a=y1/per_dad;
          z1=y1%per_dad;
      }
      if(a+b+3*c==number)
        printf("%d %d %d",a,b,3*c);

  }
}
