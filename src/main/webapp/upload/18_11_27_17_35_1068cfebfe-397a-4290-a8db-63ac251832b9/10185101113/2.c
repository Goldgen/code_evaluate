#include <stdio.h>
int main()
{
    double data[100],result=0.0;
    for(int i=0,j=2;i<100;i++,j+=2)
    {
       data[i]=(double)1/(j*(j+1)*(j+2));
    }
    for(int i=0,j=1;i<100;i++,j*=(-1))
    {
       result+=data[i]*j;
    }
    printf("%.4lf",result*4.0+3.0);
    return 0;
}
