#include <stdio.h>
#include <math.h>
int main()
{
    double a=0,sum=0;
    int i=0;
    while (i<5)
    {
        scanf("%lf",&a);
        sum+=a;
        i+=1;
    }
    printf("%.1lf",sum/5);
    return 0;
}
