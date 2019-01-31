#include<stdio.h>
#include<math.h>
int main()
{
	double A,B,C,D;
	scanf("%lf%lf",&A,&B);
	C=abs(A-B);
	D=sqrt(C);
	printf("%.8Lf\n%8lf",C,D);
	return 0;
}