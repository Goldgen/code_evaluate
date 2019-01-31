#include<stdio.h>
main()
{
    int n;
    double data[100],a=0,b=0;
    for(n=0;n<=99;n++)
    {
        data[n]=1.0/((2*n+2)*(2*n+3)*(2*n+4));
    }
    for(n=0;n<=98;n+=2)
        a+=data[n];
    for(n=1;n<=99;n+=2)
        b+=data[n];
    printf("%.4lf",(a-b)*4.0+3.0);
        
}
