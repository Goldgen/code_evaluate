#include <stdio.h>
#include <stdlib.h>

int main()
{
    float max,min,x;
    max=0;
    min=1000;
    while(scanf("%f",&x)!=EOF)
        {
        if(x>=0)
        {
            if(x>max)
         max=x;
         if(x<min)
         min=x;
         }
          else
            break;
        }
    printf("最高成绩是: %.2f,",max);
    printf(" 最低成绩是: %.2f",min);
    return 0;
}
