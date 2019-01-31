#include <stdio.h>
int main()
{
	double a=0;
	double b=0;
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