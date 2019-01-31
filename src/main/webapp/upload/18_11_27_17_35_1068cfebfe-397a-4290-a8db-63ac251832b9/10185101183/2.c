#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100];
    int a=4;int b=5;int c=6;
    double sum=0;
    data[0]=1.0/(2*3*4);
    for(int i=1;i<=99;++i)
    {
        data[i]=1.0/(a*b*c);
        a=a+2;b=b+2;c=c+2;
    }
    for(int i=0;i<=99;++i)
    {
        if(i%2==1)
            data[i]=-data[i];
        sum+=data[i];
    }
    printf("%.4lf",sum*4.0+3.0);
}
