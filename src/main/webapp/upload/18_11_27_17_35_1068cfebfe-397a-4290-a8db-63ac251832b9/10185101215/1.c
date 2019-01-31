#include<stdio.h>
#include<math.h>
int main()
{
  double a[10],b[10],x,y=0;
  int i;
  for(i=0;i<5;i++)
  {
      scanf("%lf",&x);
      a[i]=x;
  }
  for(i=0;i<5;i++)
  {
      b[i]=1.0/a[i];
      y+=b[i];
	  if(i<4)
      printf("%.2lf ",b[i]);
	  else
		  printf("%.2lf",b[i]); 
  }
  printf("\n");
  printf("%.6lf",y);
    return 0;
}
