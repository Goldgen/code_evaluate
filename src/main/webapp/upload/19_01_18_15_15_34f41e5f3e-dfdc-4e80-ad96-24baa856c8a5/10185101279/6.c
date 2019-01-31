#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
  int a,b;
  int d;
  int r=1;
  scanf("%d %d",&a,&b);
  if(a<b)
  {
      d=a;
      a=b;
      b=d;
  }
  while(r!=0)
  {
      r=a%b;
      a=b;
      b=r;
  }
  printf("最大公约数是: %d",a);


  return 0;
}
















