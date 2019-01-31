#include <stdio.h>
int main()
{
    long double a=1;
    double sum=0;
    double i=1;
    for (;i<=300;i++)
    {
        a*=i;
        sum+=1/a;
        if(1/a<0.000001)
            break;
    }
    printf("%.6lf",sum+1);
    return 0;
}

