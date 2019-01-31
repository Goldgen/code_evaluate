#include <stdio.h>
int main()
{
    double average=0;
    double sum=0;
    double number=0;
    for(int i=0;i<5;++i)
    {
        scanf("%lf",&number);
        sum+=number;
    }
    average=sum/5;
    printf("%.1lf",average);
    return 0;
}
