#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n;
    float min=0,max=0;
    while(scanf("%f",&n)!=EOF){
        if(min==0)
            min=n;
        if(n<0)
            break;
        if(n>=max)
            max=n;
        if(n<=min)
            min=n;
    }
    printf("最高成绩是: %.2f, 最低成绩是: %.2f",max,min);
    return 0;
}