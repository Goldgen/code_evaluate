#include <stdio.h>
int main()
{
    double h=100;
    double sum=100;
    for(int i=0;i<9;++i)
    {
        h=h/2;
        sum=sum+h*2;
    }
	h=h/2;
    printf("%.3lf %.3lf",sum,h);
    return 0;
}
