#include <stdio.h>
#include <stdlib.h>
void RunningAvg(float a,int b)
{
    float all;
    all=a/b;
    printf("%.2f\n",all);
}
int main()
{
    float sum=0;
    int i=1;
    float x;
    do
    {
        scanf("%f",&x);
        if(x!=-1)
        {
        sum=sum+x;
        RunningAvg(sum,i);
        i++;
    }
        else
            return 0;
    }
    while(1);
    return 0;
}

