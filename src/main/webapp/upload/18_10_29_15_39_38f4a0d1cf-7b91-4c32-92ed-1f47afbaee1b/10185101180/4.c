#include <stdio.h>
int main()
{
    double max,min,x;
    scanf("%lf",&x);
    for(max=x,min=x;x>=0;scanf("%lf",&x))
    {
        if(x>max)
            max=x;
        if(x<min)
            min=x;
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}
