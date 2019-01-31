#include <stdio.h>
#include <stdlib.h>

float RunningAvg(float a);
int main(void)
{
    float num;
    scanf("%f",&num);
    while(num!=-1){
        //printf("%f\n",num);
        printf("%.2f\n",RunningAvg(num));
        scanf("%f",&num);
    }
    return 0;
}

float RunningAvg(float a){
    static float last = 0.00f, count = 1.00f;
    float result = (a+last)/count;
    last += a;
    count++;
    return result;
}