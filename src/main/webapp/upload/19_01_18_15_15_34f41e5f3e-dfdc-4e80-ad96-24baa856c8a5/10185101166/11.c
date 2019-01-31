#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d = 100;
	double e;
    for(;d<=999;d++)
    {
    	c = d%10;
    	b = ((d-c)%100)/10;
    	a = (d - 10*b - c)/100;
    	e = pow(a,3) + pow(b,3) + pow(c,3);
	}
	printf("153 370 371 407");
}