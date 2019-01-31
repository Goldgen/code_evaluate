#include<stdio.h>
#include<math.h>
int main()
{
  double a[100],b,x=0,y;
  int i;
  for(i=0;i<100;i++)
  {
      b=(i+1)*2;
      a[i]=1/((b)*(b+1)*(b+2));
  }
  for(i=0;i<100;i++)
  {
      y=pow(-1,i);
      x+=a[i]*y;
  }
  printf("%.4lf",x*4.0+3.0);
    return 0;
}