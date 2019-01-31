#include<stdio.h>
#include<math.h>
int main()
{
    double a=1;
    double b=1;
    double sum=1;
    double c=a/b;
    while(c>=10E-6)
    {
        c=c*(1/b);
        sum+=c;
        b++;
    }
    printf("%.6lf",sum);
    return 0;
}