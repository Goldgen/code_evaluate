#include <stdio.h>
main()
{
	int a=1,b=1,s=1;
	double e=0.0;
	for(;;a++)
        {
            s=1;
            for(b=1;b<=a;b++)
            {
                s=s*b;
            }

        if (1.0/s<0.000001)
            break;
            e=e+1.0/s;
        }
        printf("%.6lf",e+1.0);
}
