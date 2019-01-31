#include <stdio.h>

int main()
{
    double data[100];
    double result=0.0;
    int i;
    for(i=0;i<100;i++)
        data[i]=1.0/(2*(i+1)*(2*(i+1)+1)*(2*(i+1)+2));
    for(i=0;i<100;i+=2)
        result=result+data[i]-data[i+1];
    result=result*4.0+3.0;
    printf("%.4lf",result);
    return 0;
}
