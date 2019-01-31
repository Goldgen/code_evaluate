#include<stdio.h>
#include <math.h>


int main(){
    int d,p,r;float m;
    scanf("%d %d %d",&d,&p,&r);
    m = log(p/(p-d*r*0.01))/log(1+r*0.01);
    printf("%.0f",m);
    return 0;
    }