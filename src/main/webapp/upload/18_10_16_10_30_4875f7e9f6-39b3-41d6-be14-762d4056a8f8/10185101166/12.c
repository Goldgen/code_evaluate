#include<stdio.h>
#include<math.h>
int main()
{

	double a,b,c;
	char h;
	scanf("%lf%c%lf",&a,&h,&b);
    if (h=='+')
    c=a+b;
    if (h=='-')
    c=a-b;
    if (h=='*')
    c=a*b;
    if (h=='/')
    c=a/b;
    printf("%.3lf",c);
}