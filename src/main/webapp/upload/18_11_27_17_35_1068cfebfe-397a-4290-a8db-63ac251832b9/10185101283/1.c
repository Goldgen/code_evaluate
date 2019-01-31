#include<stdio.h>
int main()
{
    double a[5];
    double b=0;
    scanf("%lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4]);
    printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n",1/a[0],1/a[1],1/a[2],1/a[3],1/a[4]);
    for(int i=0;i<5;++i)
        b+=1/a[i];
    printf("%.6lf",b);
    return 0;
}
