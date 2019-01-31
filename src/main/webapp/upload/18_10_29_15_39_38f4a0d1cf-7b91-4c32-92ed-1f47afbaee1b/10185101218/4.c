#include<stdio.h>
#include<float.h>
int main(void)
{
    double a,c,d;
    scanf("%lf",&a);
    c=0.0;
    d=DBL_MAX;
    while(a>=0){
        if(a>c){
            c=a;
        }
        if(a<d){
            d=a;
        }
        scanf("%lf",&a);
    }
    printf("最高成绩是: %.2lf, 最低成绩是: %.2lf",c,d);
    return 0;
}
