#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
//#include "function.h"
float RuningAvg(float);

void main(){
    float n;
    for(;;) {
        scanf("%f",&n);
        if(n==-1) break;
        printf("%.2f\n",RuningAvg(n));
    }
}

float RuningAvg(float value){
    static float sum=0;
    static int cnt=0;
    cnt++;
    sum+=value;
    return sum/cnt;
}
