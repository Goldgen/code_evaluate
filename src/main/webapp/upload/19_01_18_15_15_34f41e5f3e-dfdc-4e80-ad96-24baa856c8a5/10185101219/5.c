#include <stdio.h>
#include <stdlib.h>

int main()

{
  int a,b,c,d;
   a=1;
   c=3;
   b=2;
   d=4;
  for(;c<100;c+=2)
      a=a+c;
  for(;d<=100;d+=2)
      b=b+d;

    printf("%d %d",a,b);
    return 0;
}
