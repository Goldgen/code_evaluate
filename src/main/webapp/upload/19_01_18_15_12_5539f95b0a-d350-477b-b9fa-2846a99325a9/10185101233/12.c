#include <stdio.h>
main()
{
    double x,y,z;
    char a;
    scanf("%lf",&x);
    scanf("%c",&a);
    scanf("%lf",&y);
    switch(a)
    {
      case '+':
      z=x+y;
      break;
      case '-':
      z=x-y;
      break;
      case '*':
      z=x*y;
      break;
      case '/':
      z=x/y;
      break;
      default:
      break;
    }
    printf("%.3lf",z);
    return 0;
}