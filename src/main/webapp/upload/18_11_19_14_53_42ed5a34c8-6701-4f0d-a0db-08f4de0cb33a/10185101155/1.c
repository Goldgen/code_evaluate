#include <stdio.h>
float RunningAvg(float n)
{
    static float avg = 0;
    static float a = 0;
    avg+=n;
    a++;
    return avg/a;
}
int main()
{
    float t;
    while(scanf("%f",&t)&&t!=-1)
    {
        printf("%.2f\n",RunningAvg(t));
    }
    return 0;
}