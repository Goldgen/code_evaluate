#include<stdio.h>
int main()
{
    double a[5];
    double b;
    int c;
    scanf("%lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0;i<5;++i)
    {
        b=a[i]*100.0;
        c=(int)b;
        a[i]=c/100.0;
    }
    printf("$%.2lf $%.2lf $%.2lf $%.2lf $%.2lf",a[0],a[1],a[2],a[3],a[4]);
    return 0;
}
