#include <stdio.h>

float RunningAvg(float);

int main()
{
    float value;
    scanf("%f",&value);
    while(value!=-1){
        printf("%.2f\n",RunningAvg(value));
        scanf("%f",&value);
    }
    return 0;
}

float RunningAvg(float a){
static float sum=0;
static int count=0;
count++;
sum+=a;
return sum/count;
}