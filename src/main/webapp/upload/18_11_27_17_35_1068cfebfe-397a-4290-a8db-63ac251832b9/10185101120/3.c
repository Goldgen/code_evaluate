#include<stdio.h>
int main()
{
	double a[5];
	long b[5],c[5];
	int i=0;
	for (;i<5;i++){
		scanf ("%lf",&a[i]);
		b[i]=a[i];
		c[i]=a[i]*100-b[i]*100;
	}
	for (i=0;i<5;i++){
		if (i!=0){
			printf (" ");
		}
		printf ("$%ld.",b[i]);
		if (c[i]<10)
			printf ("0");
		printf ("%ld",c[i]);
	}
}