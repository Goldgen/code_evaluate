#include <stdio.h>
#include <math.h>

int main()
{
    int d, p;
    double r;
    scanf("%d%d%lf", &d, &p, &r);
    if(!d){
    	printf("0");
    	return 0;
	}
    double m;
    r /= 100;
    m = log((p/(p-d*r))) / log((double)(1+r));
	printf("%d", (int)round(m));
	
    return 0;
}