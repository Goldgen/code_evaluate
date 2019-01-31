#include <stdio.h>
#include <math.h>
int length = 1;
float total = 0;

float RunningAvg(float value){
    if(fabs(value + 1) < 1e-7)
        return 0;
    total += value;
    printf("%.2f\n", total/length++);
    float next;
    scanf("%f", &next);
    RunningAvg(next);
}

int main(int argc, char* argv[]){
    float num;
    scanf("%f", &num);

    RunningAvg(num);

    return 0;
}
