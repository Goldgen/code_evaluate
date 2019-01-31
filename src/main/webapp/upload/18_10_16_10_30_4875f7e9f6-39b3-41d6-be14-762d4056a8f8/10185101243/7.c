#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int a,b,c,d,max;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if (a>b)
  {
   max=a;
  }
else
{
    max=b;
}
  if (max>c)
{
    max=max;
}
else
{
    max=c;
}
if (max>d)
{
    printf("%d",max);
}
else
{
    printf("%d",d);
}

    return 0;
}