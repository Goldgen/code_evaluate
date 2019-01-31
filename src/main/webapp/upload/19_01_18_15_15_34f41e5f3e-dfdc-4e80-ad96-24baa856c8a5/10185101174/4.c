#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<float.h>

int main()
{
    double n=0.0;
    double max=0.0;
    double min=DBL_MAX;

    do
    {
    scanf("%lf",&n);
    if(max<n)
        {
            max=n;
        }

    if((n>=0)&&(min>n))
    {
        min=n;
    }

    }while(n>=0);
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
}