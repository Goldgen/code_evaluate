#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    double a,b;
    double d;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c){
    case '+':
        d=a+b;break;
    case '-':
        d=a-b;break;
    case '*':
        d=a*b;
        break;
    case '/':
        d=a/b;
        break;
		default:
			break;
    }
    printf("%.3f",d);
    return 0;
}
