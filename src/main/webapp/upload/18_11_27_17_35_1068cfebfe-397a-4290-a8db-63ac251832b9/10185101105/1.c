#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n[5],m[5],sum=0.0l;
    int i;
    scanf("%lf %lf %lf %lf %lf",&n[0],&n[1],&n[2],&n[3],&n[4]);
    for(i=0;i<5;i++)
    {
        m[i]=1.0/n[i];
        sum+=m[i];
    }
    printf("%.2lf %.2lf %.2lf %.2lf %.2lf\n%.6lf",m[0],m[1],m[2],m[3],m[4],sum);
    return 0;
}
