#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
   int x,y,z,i=0;
  for(x=1;x <= 13;x++)
  for(y=1;y <= 18; ++y)
  for(z=3;z<= 96;z+=3)
  {if (7*x+5*y+z/3==100&&x+y+z==100)
    {++i;
     if (i==1)
      printf("%d %d %d",x,y,z);
     else
    printf(" %d %d %d",x,y,z);}}
   return 0;
}
