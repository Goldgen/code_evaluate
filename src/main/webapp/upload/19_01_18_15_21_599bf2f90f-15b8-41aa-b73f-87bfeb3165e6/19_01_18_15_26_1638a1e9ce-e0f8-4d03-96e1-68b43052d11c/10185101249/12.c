#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,c,d;
    char b;
    scanf("%lf%c%lf",&a,&b,&c);
    switch(b)
    {
    case '+':
        d=a+c;
        break;
    case '-':
        d=a-c;
        break;
    case '*':
        d=a*c;
        break;
    case '/':
        d=a/c;
        break;
    default:
        break;
    }
	printf("%.3lf",d);
    return 0;
}