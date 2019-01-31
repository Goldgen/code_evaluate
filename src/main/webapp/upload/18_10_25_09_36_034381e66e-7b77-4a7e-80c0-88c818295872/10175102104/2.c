#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a_1,a_2,a_3,a_4,a_5,x;
    float i;
    scanf("%d%d%d%d%d",&a_1,&a_2,&a_3,&a_4,&a_5);
    x=a_1+a_2+a_3+a_4+a_5;
    i=(float)x/5;
    printf("%.1f",i);
    return 0;
}
