#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x[100];
    double max;
    double min;
    double n;
    scanf("%lf",&x[0]);
    max=min=x[0];
    for(int i=1;i<=100;++i)
    {
        scanf("%lf",&n);
        x[i]=n;
    if (x[i]>=max)
        max=x[i];
    if((x[i]<=min)&&(x[i]>=0))
        min=x[i];
    if(x[i]<0.0)
        break;
    else
        max=max;
        min=min;
    }
printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);

    return 0;
}
