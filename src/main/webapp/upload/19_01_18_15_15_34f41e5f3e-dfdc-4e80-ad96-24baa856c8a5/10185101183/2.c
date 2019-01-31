#include<stdio.h>
int main(void)
{
    double k=1.0;
    double p=2.0;
    for(int i=2;;i++)
    {
            k=k*1/i;
            p=p+k;
        if(k<(1e-6))
            break;
    }
    printf("%.6lf",p);
    return 0;
}
