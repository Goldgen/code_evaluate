#include<stdio.h>

double n,m;
char x;

int main()
{
	scanf("%lf%c%lf",&n,&x,&m);
	if (x=='+') printf("%.3f",n+m);
	else if(x=='-') printf("%.3f",n-m);
	else if(x=='*') printf("%.3f",n*m); 
	else printf("%.3f",n/m);
	return 0;
}