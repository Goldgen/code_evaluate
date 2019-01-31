#include <stdio.h>
int main()
{
	double e=1,a;
	int i=1,j=1;
	do{
		i=i*j;a=1.0/i;e=e+a;j++
	;}while(a>=1E-6);
	printf("%.6lf",e);
	return 0;
}