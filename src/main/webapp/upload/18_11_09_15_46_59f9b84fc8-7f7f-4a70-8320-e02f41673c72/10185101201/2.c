#include<stdio.h>

main()
{
    int i;
    double a=2.0,b=1.0,s=0.0,r;
    for(i=1;i<=50;i++)
        {
            s+=a/b;
            r=a;
            a=a+b;
            b=r;
        }
    printf("%.2lf",s);
}
