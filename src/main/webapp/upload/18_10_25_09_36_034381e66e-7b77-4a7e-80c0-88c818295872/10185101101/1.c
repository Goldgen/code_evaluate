#include <stdio.h>
int main(){
	double h,d=0.0L;
	int i=0;
	h=100.0L;
	d=100.0L;
	for(i=1;i<10;++i)
	{
		h/=2;
		d+=2*h;}
	h=h/2;
	printf("%.3lf %.3lf",d,h);
	return 0;
}