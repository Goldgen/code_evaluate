#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int change (unsigned long long int x)
{
    int m;double i=0;unsigned  int y=0;
    while (x>0)
    {   m=x%10;
        y=y+m*pow(8,i);
        x=x/10;
        ++i;}
        return y;
}
int main()
{
  unsigned long long int a,b;
  scanf("%llu",&a);
  b=change(a);
  printf("%llu",b);
   return 0;
}

