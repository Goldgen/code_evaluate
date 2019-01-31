#include <stdio.h>
#include <stdlib.h>

float RunningAvg(float a,float avg,int n)
{
    return (avg*n+a)/(n+1);
}
int main()
{
    float avg=0;
    int n=0;
    float a;
    while(scanf("%f",&a),a!=-1){
        avg+=a;
        ++n;
        printf("%.2f\n",avg/n);
    }
    return 0;
}
