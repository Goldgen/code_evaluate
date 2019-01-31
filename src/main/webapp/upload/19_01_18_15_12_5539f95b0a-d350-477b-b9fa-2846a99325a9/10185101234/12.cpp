#include<stdio.h>
int main()
{
    double a;
    double b;
    char operation;
    scanf("%lf %c %lf",&a,&operation,&b);
	switch(operation)
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
        printf("????");
        break;
    }
	return 0;
}