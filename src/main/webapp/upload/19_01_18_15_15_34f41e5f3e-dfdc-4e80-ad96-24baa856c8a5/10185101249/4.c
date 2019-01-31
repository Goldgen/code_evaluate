#include <stdio.h>
int main()
{
    double i,max,min;
    scanf("%lf",&i);
    max=i;
    min=i;
    while(i>=0)
    {
        if(i>max)
            max=i;
        if(i<min)
            min=i;
        scanf("%lf",&i);

    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",max,min);
    return 0;
}
