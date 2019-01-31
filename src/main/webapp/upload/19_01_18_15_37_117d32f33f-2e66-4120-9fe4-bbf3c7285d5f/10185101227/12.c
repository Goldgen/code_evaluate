#include <stdio.h>
#include <stdlib.h>

int main()
{
  double a,b,c;
  char f;
  scanf ("%lf%c%lf",&a,&f,&b);
  switch(f)
  {
   case '*':
   c=a*b;
   break;
   case '/':
   c=a/b;
   break;
   case '+':
   c=a+b;
   break;
   case '-':
   c=a-b;
   break;
   default:
	break;	  
  }
  printf("%.3lf",c);
  return 0;
}
