#include<stdio.h>
int main()
{double a=0.0,b=0.0
;
 char c;
 scanf("%lf%c%lf",&a,&c,&b);
 switch(c)
 {case '+':
 printf("%.3lf",a+b);
 break;
 case '-':
 printf("%.3lf",a-b);
 break;
 case '*':
 printf("%.3lf",a*b);
 break;
 case '/':
 printf("%.3lf",a/b);
 break;
default:
break;}
return 0;
}