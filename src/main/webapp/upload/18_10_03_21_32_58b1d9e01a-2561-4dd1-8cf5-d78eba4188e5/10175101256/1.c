#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
    int d=0,p=0,r=0,m=0;
    float a=0.0,b=0.0;
    scanf("%d %d %d",&d,&p,&r);
    a=log(p/(p-d*0.01*r));
    b=log(1+0.01*r);
    m=a/b+0.5;
    printf("%d",m);
}
