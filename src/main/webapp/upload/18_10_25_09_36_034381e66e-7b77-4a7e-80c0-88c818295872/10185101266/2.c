#include<stdio.h>
int main(void)
{
	double a,M=0;
	int n=1;

    while(n<=5)
	{
		scanf("%lf",&a);
		M=M+a;
		n=n+1;
	}
    M=M/5;
	printf("%.1lf",M);
    return 0;
}
