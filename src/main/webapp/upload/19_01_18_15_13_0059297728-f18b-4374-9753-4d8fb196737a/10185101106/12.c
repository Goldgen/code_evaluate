#include<stdio.h>
int main ()
{
    double a,b,d;
    char c;
    scanf("%lf%c%lf",&a,&c,&b);
    switch(c)
    {
        case '+':
            d=a+b;
            break;
        case'-':
            d=a-b;
            break;
        case'*':
            d=a*b;
            break;
        case'/':
            d=a/b;
            break;
		default:
			break;
		
    }
    printf("%.3lf",d);
    return 0;




}