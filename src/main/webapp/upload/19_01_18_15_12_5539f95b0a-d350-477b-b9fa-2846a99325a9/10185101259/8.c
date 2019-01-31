#include<stdio.h>
int main()
{
  int a=0,b=0,c=0;
  scanf("%d%d%d",&a,&b,&c);
  if(a<=b&&a>=c||a<=c&&a>=b)
  printf("%d",a);
  else {if(b<=a&&b>=c||b<=c&&b>=a)
  printf("%d",b);
  else
  printf("%d",c);}
  return 0;
  }
