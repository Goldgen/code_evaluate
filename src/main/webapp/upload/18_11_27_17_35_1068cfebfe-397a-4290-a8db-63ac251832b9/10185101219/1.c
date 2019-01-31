#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a[5],b[5],sum=0.0;
    scanf("%lf %lf %lf %lf %lf",&a[0],&a[1],&a[2],&a[3],&a[4]);
    for(int i=0;i<5;++i)
    {
        b[i]=1.0/a[i];
        sum+=b[i];
    }
    printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n",b[0],b[1],b[2],b[3],b[4]);
    printf("%6lf",sum);
    return 0;

}
