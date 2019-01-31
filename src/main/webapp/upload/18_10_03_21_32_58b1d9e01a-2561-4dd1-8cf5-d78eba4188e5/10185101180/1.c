#include<stdio.h>
#include<math.h>
int main()
{
    float d,p,r,y;
    scanf("%f",&d);
    scanf("%f",&p);
    scanf("%f",&r);
    y=log(p/(p-d*r))/log(1+r);
    printf("you need %.0f month(s) to pay your debt.",y);
    return 0;
}
