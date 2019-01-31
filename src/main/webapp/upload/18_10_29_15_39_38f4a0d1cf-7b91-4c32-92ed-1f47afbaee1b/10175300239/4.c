#include <stdio.h>

int main()
{
    float n=0.0;
    float max=0.0;
    float min=0.0;
    scanf("%f",&n);
    max=min=n;
    while(n>0)
    {
        if(max<n)
            max=n;
        if(min>n)
            min=n;
        scanf("%f",&n);
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}