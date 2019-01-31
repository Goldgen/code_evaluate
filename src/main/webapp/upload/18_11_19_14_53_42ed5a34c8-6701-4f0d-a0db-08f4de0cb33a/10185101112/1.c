#include <stdio.h>

float RunningAvg(float n){
    static float sum=0.0;
    static int i=0;
    sum=sum+n;
    i++;
    return sum/i;
}
int main()
{
    float num;
    scanf("%f",&num); 
    while (num!= -1){
        printf("%.2f\n",RunningAvg(num));
       scanf("%f",&num); 
    }
    return 0;
}