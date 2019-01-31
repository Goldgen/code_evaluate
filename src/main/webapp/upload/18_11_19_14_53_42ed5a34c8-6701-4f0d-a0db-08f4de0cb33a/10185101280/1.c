#include<stdio.h>

void RunningAvg(float num)
{
    static int n;
    float ave;
    static float sum=0;
    n++;
    sum+=num;
    ave=sum/n;
    printf("%.2f\n",ave);
}


int main()
{
    float num;
while(scanf("%f",&num)&&num!=-1)
   {
    RunningAvg(num);
    }

    return 0;
}




