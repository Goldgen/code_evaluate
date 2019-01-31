#include <stdio.h>
#include <stdlib.h>
void RunningAvg(float num)
{static n;
static float sum=0,ave;
n++;
sum=sum+num;
ave=sum/n;
printf("%.2f\n",ave);
}
int main()
{float num;
int n=0;
while(scanf("%f",&num)&&num!=-1)
{
    RunningAvg(num);
    }
return 0;}
