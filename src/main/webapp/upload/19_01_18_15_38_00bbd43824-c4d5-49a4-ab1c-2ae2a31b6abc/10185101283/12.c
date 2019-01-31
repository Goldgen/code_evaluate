#include<stdio.h>
int main()
{
    double a,b;
    char x;
    scanf("%lf%c%lf",&a,&x,&b);
    switch(x)
    {
    case '+':
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
			break;
    }
    return 0;
}