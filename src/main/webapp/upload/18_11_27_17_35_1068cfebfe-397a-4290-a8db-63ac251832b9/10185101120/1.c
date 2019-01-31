#include<stdio.h>
int main()
{
	double a[5],sum=0;
	int i;
	for (i=0;i<5;i++){
		scanf ("%lf",&a[i]);
	}
	for(i=0;i<5;i++){
		a[i]=1/a[i];
		if (i==0)
		    printf ("%.2lf",a[i]);
		else
		    printf (" %.2lf",a[i]);
		sum+=a[i];
	}
	printf ("\n%.6lf",sum);
}