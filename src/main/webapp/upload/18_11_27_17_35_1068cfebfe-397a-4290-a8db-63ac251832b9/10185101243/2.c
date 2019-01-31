#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main()
{
    double data[100];
    
    int i,j;
    double m=0.0;
    for(i=0;i<=99;i++)
    {
        data[i]=1.0/((2*i+2)*(2*i+3)*(2*i+4));
    }


        for(j=0;j<=99;j++)
       {
        m=m+pow(-1,j)*data[j];
       }

        printf("%.4lf",m*4.0+3.0);




return 0;
}
