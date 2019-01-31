#include <stdio.h>
#include <stdlib.h>
int main()
{
  float s=0,a=2,b=1,z,i;
  for (i=1;i<=50;++i)
    {s=s+a/b;
    z=b; b=a; a=a+z;}
   printf("%0.2f",s);
   return 0;
}

