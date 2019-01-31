#include<stdio.h>
main()
{
    int n=1;
    double a[5],b[5],m;
    scanf("%lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4]);
        b[0]=1.0/a[0];
        printf("%.2lf",b[0]);
        m=b[0];
    for(;n<=4;n++)
    {
        b[n]=1.0/a[n];
        printf(" %.2lf",b[n]);
        m=m+b[n];
    }
    printf("\n%.6lf",m);
}