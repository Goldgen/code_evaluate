#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a=0;
    double c=0;
    double d=100;
    scanf("%lf",&a);
    while(a!=-1)
    {
        if(a>c)
            c=a;
        if(a<d)
            d=a;
        scanf("%lf",&a);
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",c,d);
    return 0;
}
