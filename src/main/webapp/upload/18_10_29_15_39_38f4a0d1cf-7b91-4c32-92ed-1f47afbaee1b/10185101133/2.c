
#include<stdio.h>
int main()
{
    double e =0;
    int i = 0;
    int num=1;double sum =1;
    while(sum>0.0000001){
        sum = 1.0/num;
        e+=sum;
        i++;
        num*=i;
    }

    printf("%.6lf",e);
}
