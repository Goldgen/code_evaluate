#include<stdio.h>
#include<math.h>
int main (void)
{
    float x,min=150,max=0;
    int i;
    for(i=1;i<=100;i++)
    {
        scanf("%f",&x);
        if(max<x)
            max=x;
             if(x<0)
                break;
            if(min>x)
                min=x;
            }
            printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}