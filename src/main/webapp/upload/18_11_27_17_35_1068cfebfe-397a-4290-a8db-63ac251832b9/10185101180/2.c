#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100];
    int a,b,i,j,k;
    double n,result;
    for(a=0,i=2,j=3,k=4;a<100;a++)
    {
        data[a]=1.0/(i*j*k);
        i=i+2;
        j=j+2;
        k=k+2;
    }
    for(b=0,n=0.0;b<100;b++)
    {
        if(b%2==0)
            n=n+data[b];
        else
            n=n-data[b];
    }
    result=4.0*n+3.0;
    printf("%.4lf",result);
    return 0;
}