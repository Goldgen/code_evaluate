#include<stdio.h>
float RunningAvg(float value){
    static float n=0;
    static cnt=0;
    n+=value;
    ++cnt;
    return n/cnt;
}
int main(){
    float value;
    while(scanf("%f",&value)){
        if(value==-1)
            break;
        else
            printf("%.2f\n",RunningAvg(value));
    }
    return 0;
}
