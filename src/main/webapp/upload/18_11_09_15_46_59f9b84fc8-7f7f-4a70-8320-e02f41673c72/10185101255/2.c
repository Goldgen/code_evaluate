

#include<stdio.h>

int main()
{
    int i=1;
    double m=1.0;
	double p=2.0;
    double n=2.0;
    double s=0.0;
    for (i=1; i<=50; i++) {
        s+=n/m;
		p=n;
        n=n+m;
		m=p;

    }
    printf("%.2f",s);
    
    
    
    
    
    
    
    return 0;
}

