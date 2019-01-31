#include<stdio.h>
int main()
{
	double a,b;
	char ch;
	scanf("%lf%c%lf",&a,&ch,&b);
	switch(ch)
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
		default:
			printf("%.3lf",a/b);
			break;
	}
	return 0;
}