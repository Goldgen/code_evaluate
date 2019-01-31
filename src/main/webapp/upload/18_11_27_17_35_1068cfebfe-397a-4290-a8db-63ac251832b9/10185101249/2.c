#include <stdio.h>
int main()
{
    double data[100]={0};
    double s=0;
    int n,i=0,a=1;
    for(n=2;n<=200;n+=2)
    {
        data[i]=1.0/(n*(n+1)*(n+2));
        i++;
    }
    for(i=0;i<=99;i++)
    {
        s+=data[i]*a;
        a*=-1;
    }
    printf("%.4lf",s*4.0+3.0);
    return 0;
}
