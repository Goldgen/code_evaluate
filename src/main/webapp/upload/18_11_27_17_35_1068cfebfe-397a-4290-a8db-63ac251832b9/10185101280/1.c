#include <stdio.h>
#include<stdlib.h>

int main()
{
double num[5];
double sum=0.0;

for(int i=0;i<5;i++)
{
    scanf("%lf",&num[i]);
    double turn=1.0/num[i];
    sum+=turn;
    double res[5];
    res[i]=turn;
    if(i<4)
    printf("%.2lf ",res[i]);
    else
        printf("%.2f\n",res[i]);
}
printf("%.6f",sum);

return 0;
}