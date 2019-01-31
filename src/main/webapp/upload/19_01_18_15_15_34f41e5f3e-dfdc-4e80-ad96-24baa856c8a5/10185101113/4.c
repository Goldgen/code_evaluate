#include <stdio.h>

int main()
{
    double MAX=0.0,MIN=0.0,Grade=0.0;
    scanf("%lf",&Grade);
    MIN=Grade;
    while(Grade>=0)
    {
        if (Grade>MAX)
            MAX=Grade;
        if (Grade<MIN)
            MIN=Grade;
        scanf("%lf",&Grade);
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",MAX,MIN);
    return 0;
}

