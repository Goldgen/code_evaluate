#include <stdio.h>
#include<stdlib.h>

int main()
{
    double data[100];
    int i;
    for( i=1;2*i<=200;i++)
    {
        double sum;
        sum=2*i*(2*i+1)*(2*i+2);
        double n;
        n=1.0/sum;
        data[i-1]=n;
    }
     double total=0.0;
    for(int j=0;j<100;j++)
    {

        if(j%2==0)
        total+=data[j];
        else
            total-=data[j];
    }
    double www;
    www=total*4.0+3.0;
    printf("%.4lf",www);
return 0;
}
