#include<stdio.h>
#include<stdlib.h>
int main()
{ double a,b;
 char c;
 scanf("%lf%c%lf",&a,&c,&b);
  switch(c)
  {case '+':printf("%.3lf",a+b);break;
   case '-':printf("%.3lf",a-b);break;
   case '*':printf("%.3lf",a*b);break;
   case '/':printf("%.3lf",a/b);break;
   default:break;
  }
	return 0;
}