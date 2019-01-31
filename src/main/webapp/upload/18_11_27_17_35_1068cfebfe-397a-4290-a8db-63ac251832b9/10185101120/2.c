#include<stdio.h>
int main()
{
	double a[100],sum=0,m;
	int i=0;
	for (;i<100;i++){
		m=i+1;
		a[i]=1/((2*m)*(2*m+1)*(2*m+2));
	}
	for (int v=1,i=0;i<100;i++){
		sum=sum+v*a[i];
		v=-1*v;
	}
	printf ("%.4lf",4.0*sum+3.0);
}