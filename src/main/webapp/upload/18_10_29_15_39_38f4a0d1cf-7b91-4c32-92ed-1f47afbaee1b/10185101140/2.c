#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double e=1;
    int num=1;//阶乘
    int i;
    for(i=1;num<=1000000;i++){
        num*=i;
        e+=1/(double)num;
    }

    printf("%.6lf",e);
    return 0;
}