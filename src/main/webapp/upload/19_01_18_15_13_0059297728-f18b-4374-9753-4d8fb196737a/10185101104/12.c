#include <stdio.h>

int main()
{
	char sign;
	double a,b,result;
	scanf("%lf%c%lf",&a,&sign,&b);
	switch(sign)
	{
		case '+':result=a+b;break;
		case '-':result=a-b;break;
		case '*':result=a*b;break;
		case '/':result=a/b;break;
		default:
			break; 
	}
	printf("%.3lf",result);
	return 0;
}