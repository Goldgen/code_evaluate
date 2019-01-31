#include <stdio.h>
float RunningAvg(float);
int main(void) {
    float x=0;
    scanf("%f",&x);
    for(;x!=-1;scanf("%f",&x)){
        printf("%.2f\n",RunningAvg(x));
    }
    return 0;
}
float RunningAvg(float x){
    static int count=0;
    static float sum=0.0;
    count ++;
    sum+=x;
    return sum/count;
}
