#include <stdio.h>
#include <stdlib.h>

int main()
{
   double N1,N2;
  char operation=0;

  scanf("%lf%c%lf",&N1,&operation,&N2);
  if(operation=='+')
    printf("%.3f",N1+N2);
    else if(operation=='-')
    printf("%.3f",N1-N2);
    else if(operation=='*')
    printf("%.3f",N1*N2);
    else if(operation=='/')
    printf("%.3f",N1/N2);

}
