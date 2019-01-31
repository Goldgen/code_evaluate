#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100];
    double sum=0.0;
    double sign=1.0;
    int j=0;
    for(size_t i=0;i<sizeof(data)/sizeof(double);i++)
    {
        j=2*(i+1);
        data[i]=1.0/(j*(j+1)*(j+2));
        sum+=sign*data[i];
        sign=-sign;
    }
    printf("%.4lf",sum*4.0+3.0);
        
    return 0;
}
