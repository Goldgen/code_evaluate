#include<stdio.h>
int main()
{
    float a=0;
    float b=0;
    for(int i=0;i<5;++i)
     {
         scanf("%f",&a);
         b = a +b;
     }

    printf("%.1f",b/5.0f);
    return 0;
}
