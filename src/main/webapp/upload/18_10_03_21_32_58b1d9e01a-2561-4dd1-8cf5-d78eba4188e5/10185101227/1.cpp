#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int d,p;
    float m,r;
    scanf ("%d %d %f",&d,&p,&r);
    r=0.01*r;
    m=log(p/(p-d*r))/log(1+r);
	m=floor(m+0.5);
    printf("%d",(int)m);
    return 0;
}
