#include <stdio.h>

float RunningAvg(float);

int main()
{
    int i;
    float value;
    float num[100];

    for(i=0; ; i++)
        {
            scanf("%f", &value);
            if(value==-1)
                break;
            else
                scanf("\n");
            num[i] = value;
            printf("%.2f", RunningAvg(num[i]));
        }
}

float RunningAvg(float num[])
{
    const float y=0;
    y = (y+num[i])/(i+1);
    return y;
}
