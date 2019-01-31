#include <stdio.h>

int main()
{
    double data[100];
    double a=2, b=3, c=4, n1=0, n2=0, n=0;
    int i;

    for(i=0; i<100; i++)
    {
        data[i] = 1/(a*b*c);
        a+=2;
        b+=2;
        c+=2;
    }
    for(i=0; i<100; i+=2)
        n1 = n1+data[i];
    for(i=1; i<100; i+=2)
        n2 = n2+data[i];
    n = (n1-n2)*4.0+3.0;
    printf("%.4lf", n);
}
