#include <stdio.h>
#include <stdlib.h>

float RunningAvg(float m)
{
    static i=0;
    static float b=0;
    b=b+m;
    i++;
    return b/i;
}

int main()
{
   float a;
   while(scanf("%f",&a)&&a!=-1)
   printf("%.2f\n",RunningAvg(a));

    return 0;
}