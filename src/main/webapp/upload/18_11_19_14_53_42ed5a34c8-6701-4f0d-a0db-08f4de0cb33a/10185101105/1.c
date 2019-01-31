#include <stdio.h>

float RunningAvg();
int main()
{
    RunningAvg();
    return 0;
}

float RunningAvg()
{
    static int i=0;
    static float x=0.0f;
    float n;
    scanf("%f",&n);
    x+=n;
    i++;
    if(n!=-1)
    {
        printf("%.2f\n",x/i);
        RunningAvg();
    }
    else
        return x/i;
}
