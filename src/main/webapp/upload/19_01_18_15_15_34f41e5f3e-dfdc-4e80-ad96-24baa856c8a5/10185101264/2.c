#include<stdio.h>
#include<math.h>
int main()
{
	int i;
	double e=1,E=1;
	for(i=1;E<=(100000);i++)
	{
	    E=1;
		for(int j=1;j<=i;j++)
		    E=E*j;
        e=e+1/E;
	}
    printf("%.6lf",e);
}