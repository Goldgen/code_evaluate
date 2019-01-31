#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100],sum=0.0l;
    int i,j;
    for(i=0;i<100;i++)
    {
        j=i+1;
        data[i]=1.0/(2*j*(2*j+1)*(2*j+2));
        if(i%2==0)
            sum+=data[i];
        else
            sum-=data[i];
    }
    sum=sum*4.0+3.0;
    printf("%.4lf",sum);
    return 0;
}
