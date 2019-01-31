#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,d=0.000L;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c){
case '+':
    d=a+b;
    break;
case '-':
    d=a-b;
    break;
case '*':
    d=a*b;
    break;
case '/':
    d=a/b;
    break;
default:
	printf("ERROR");
			break;
    }
    printf("%.3lf",d);
    return 0;
}
