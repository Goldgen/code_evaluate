#include<stdio.h>

int main(void)
{
	double a,b;
	char   ch;
	scanf("%lf %c %lf",&a,&ch,&b);
	if(ch=='+')
	  printf("%.3lf",a+b);
	else if(ch=='-')
	  printf("%.3lf",a-b);
	else if(ch=='*')
	  printf("%.3lf",a*b);
	else
	  printf("%.3lf",a/b);
	return 0;              
}