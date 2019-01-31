#include<stdio.h>
int main()
{
    double a=2.,b=3.,c=1.,d=2.,sum,i,j;
    int e;
    sum=a/c+b/d;
    for(e=1;e<=48;e++)
    {
        i=a+b;
        j=c+d;
        sum +=i/j;
        a=b;
        b=i;
        c=d;
        d=j;

    }
    printf("%.2lf",sum);
    return 0;
}
