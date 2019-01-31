#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a;double min,max;min=100;max=0;
    while(scanf("%lf",&a)){
        if(a<0)break;
        if(min>a)min=a;
        if(max<a)max=a;
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
