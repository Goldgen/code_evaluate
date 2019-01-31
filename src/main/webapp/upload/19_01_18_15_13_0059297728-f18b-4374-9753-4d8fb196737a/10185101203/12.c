#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a,b,c;
	char d;
	scanf("%lf%c%lf",&a,&d,&b);
	switch(d)
	{
			case'+':
			    c=a+b;
			    printf("%.3lf",c);
			    break;
            case'-':
			    c=a-b;
			    printf("%.3lf",c);
			    break;
            case'*':
			    c=a*b;
			    printf("%.3lf",c);
			    break;
            case'/':
			    c=a/b;
			    printf("%.3lf",c);
			    break;
            default:
                printf("0");
                break;
	}
}