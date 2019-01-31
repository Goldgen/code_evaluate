#include<stdio.h>
#include<math.h>
int main()
{double a,b;
char op;
scanf("%lf%c%lf\n",&a,&op,&b);
switch(op)
{case'+':
    printf("%.3lf",a+b);
    break;
case'-':
    printf("%.3lf",a-b);
    break;
case'*':
    printf("%.3lf",a*b);
    break;
case'/':
    if(b==0)
        printf("ERROR");
    else
        printf("%.3lf",a/b);
    break;
default:
    printf("ERROR");
    break;
}   return 0;
}