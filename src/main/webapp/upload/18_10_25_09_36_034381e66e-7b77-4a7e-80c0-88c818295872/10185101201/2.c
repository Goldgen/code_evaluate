#include <stdio.h>
main()
{
	int a=1;
	float b=0,c=0;

	for(a>0;a<=5;a++)
    {
        scanf("%f",&b);
        c=c+b;
    }
    printf("%.1f",c/5.0);
}