#include <stdio.h>
main()
{
	int a=1;
	double b=0,c=50;

	for(a>0;a<=9;a++)
    {
        b=b+2*c;
        c=0.5*c;
    }
    printf("%.3lf %.3lf",b+100,c);
}