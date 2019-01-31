#include<stdio.h>
#include<math.h>
int main()
{
    int H=100,i;
    float h,x;
    h=pow((float)1/2,10)*H;
    x=100.00;
    for(i=0;i<=8;++i){
        x+=pow((float)1/2,i)*100;
    }
    printf("%.3f %.3f",x,h);
    return 0;
}