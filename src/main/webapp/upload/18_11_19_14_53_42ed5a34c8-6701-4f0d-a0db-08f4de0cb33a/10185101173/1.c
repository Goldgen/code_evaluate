#include <stdio.h>
#include <stdlib.h>

float RunningAvg(float value)
{
    static float a=0;
    static int i=1;
    float b=0;
    a+=value;
    b=a/i;
    ++i;
    return b;
}

int main()
{
    float value,a[100];
    int k=0;
    scanf("%f",&value);
    while(value!=-1)
    {
        value=RunningAvg(value);
        a[k]=value;
        scanf("%f",&value);
        ++k;
    }
    for(int j=0;j<k;++j)
    {
        if(j==k-1)
            printf("%.2f",a[j]);
        else
            printf("%.2f\n",a[j]);
    }
    return 0;
}