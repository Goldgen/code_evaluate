#include<stdio.h>

int main()
{
	int i;
    double s;
    long x,a,b;
    
    for (i = 0; i < 5; i++)
    {
        scanf("%lf",&s);
        s*=100;
        a = s/100;
        b = s%100;
        if (b < 10) 
            printf("$%ld.0%ld", a, b);
        else 
            printf("$%ld.%ld", a, b);
        if (i<4) printf(" ");
    }
    return 0;
}
