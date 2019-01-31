#include <stdio.h>


int main() {
    int i=1;
	float a=2.0,b=1.0,t=0.0,sum=0.0;
    for (;i<=50;i++)
    {
    	sum=sum+a/b;
    	
    	t=a;
		a=a+b;
		b=t;
	}
	printf("%.2f",sum);
	return 0;
}