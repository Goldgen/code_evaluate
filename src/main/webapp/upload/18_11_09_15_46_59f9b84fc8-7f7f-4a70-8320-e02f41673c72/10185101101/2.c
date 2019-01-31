#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long num[51],i=0;double sum=0.0;
    num[0]=1;num[1]=2;
    sum =0;
    for(i=1;i<50;++i)
    {
        num[i+1]=num[i]+num[i-1];
    }
    for(i=0;i<50;++i)
        sum+=(double)num[i+1]/num[i];

    printf("%.2lf",sum);
    return 0;
}

