#include <stdio.h>
int main()
{
    float a=2.0f,b=1.0f,c=0.0f,n=0.0f;
    for(int i=1;i<=50;i++)
    {
    	c=a;
    	n+=a/b;
    	a=a+b;
    	b=c;
	}
	printf("%.2f",n);
    return 0;
} 