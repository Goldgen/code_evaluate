#include<stdio.h>
int main()
{
	double a,b;
	char ch;
	scanf("%lf%c%lf",&a,&ch,&b);
	if(ch=='+')
		printf("%.3lf",a+b);
	if(ch=='-')
		printf("%.3lf",a-b);
	if(ch=='*')
		printf("%.3lf",a*b);
	if(ch=='/')
		printf("%.3lf",a/b);
	return 0;
}