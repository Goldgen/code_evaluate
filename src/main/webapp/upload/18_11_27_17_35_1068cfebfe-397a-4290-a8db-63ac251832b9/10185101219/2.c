#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100],sum=0.0;
   for(int i=1;i<=100;++i)
        data[i-1]=(double)1.0/(2*i*(2*i+1)*(2*i+2));
        for(int k=0;k<100;++k){
        if(k%2==0)
        sum=sum+data[k];
        else if(k%2!=0)
        sum=sum-data[k];
        }
        sum=sum*4.0+3.0;
        printf("%.4lf",sum);
    return 0;

}
