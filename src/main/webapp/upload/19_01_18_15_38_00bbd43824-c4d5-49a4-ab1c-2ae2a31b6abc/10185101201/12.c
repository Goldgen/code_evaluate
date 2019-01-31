#include <stdio.h>
main()
{
	double a,c;
	char b;
	scanf("%lf%c%lf",&a,&b,&c);
	switch(b)
	{
    case'+':
        printf("%.3lf",a+c);
        break;
    case'-':
        printf("%.3lf",a-c);
        break;
    case'*':
        printf("%.3lf",a*c);
        break;
    case'/':
        printf("%.3lf",a/c);
        break;
    default:
        break;
	}

}
