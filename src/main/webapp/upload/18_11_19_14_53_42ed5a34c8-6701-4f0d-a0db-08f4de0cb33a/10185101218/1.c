#include<stdio.h>
float RunningAvg(float);

int main(void)
{
    float num=0;
    scanf("%f",&num);
    while(num!=-1)
    {
        printf("%.2lf\n",RunningAvg(num));
        scanf("%f",&num);
    }
    return 0;
}

float RunningAvg(float a)
{
    static float every=0,n=0;
    float out=0;
    every+=a;
    out=every/(float)(++n);
    return out;
}
