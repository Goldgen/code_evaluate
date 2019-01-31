#include<stdio.h>

float RunningAvg(float n);

int main(void)
{
    float num;
    scanf("%f",&num);
    while(num != -1)
    {
        printf("%.2f\n",RunningAvg(num));
        scanf("%f",&num);
    }
    return 0;
}

static float sum = 0;
static int i = 0;

float RunningAvg(float n)
{
    i++;
    sum += n;
    return sum/i;
}
