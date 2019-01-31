#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b,output;
	char c;
   scanf("%lf%c%lf",&a,&c,&b);
	switch(c)
	{case '+':output=a+b;break;
	case '-':output=a-b;break;
    case '*':output=a*b;break;
   case '/':output=a/b;break;
	default: break;	}	
    printf("%.3lf",output);

    return 0;
}