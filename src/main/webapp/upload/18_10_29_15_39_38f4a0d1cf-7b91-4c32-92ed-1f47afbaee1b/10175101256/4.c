#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max=0,min=100,a;
    scanf("%f",&a);
    while(a>=0){
        if(max<a)
            max=a;
        if(min>a)
            min=a;
            scanf("%f",&a);
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}
