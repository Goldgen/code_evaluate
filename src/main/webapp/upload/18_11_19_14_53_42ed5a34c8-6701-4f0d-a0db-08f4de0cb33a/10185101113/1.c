#include <stdio.h>
float RunningAvg(float);
int main()
{
    float n;
    scanf("%f",&n);
    while(n!=-1)
    {
        n=RunningAvg(n);
        printf("%.2f\n",n);
        scanf("%f",&n);
    }
    return 0;
}
float RunningAvg(float n){
static float sum=0;
static int i=0;
sum+=n;
i++;
return sum/i;
}
