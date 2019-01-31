#include <stdio.h>
#include <stdlib.h>

int main()
{
    double date[100],sum;
    double b=2,c=3,d=4;
    for(int i=0;i<100;++i)
    {
        date[i]=1/(b*c*d);
        b+=2;c+=2;d+=2;
    }
    sum=date[0];
    for(int j=0;j<99;++j)
    {
        if(j%2==0)
            sum=sum-date[j+1];
        else
            sum=sum+date[j+1];
    }
    sum=sum*4.0+3.0;
    printf("%.4lf",sum);
    return 0;
}
