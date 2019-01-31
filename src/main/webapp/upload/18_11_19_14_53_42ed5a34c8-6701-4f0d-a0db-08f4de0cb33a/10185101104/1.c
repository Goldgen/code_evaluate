#include <stdio.h>

void average(float a)
{
    static float sum=0;
    static float n=0;
    n++;
    sum+=a;
    printf("%.2f\n",sum/n);
    return;
}

int main()
{
    float a;
    scanf("%f",&a);
    while(a!=-1)
    {
        average(a);
        scanf("%f",&a);
    }
    return 0;
}
