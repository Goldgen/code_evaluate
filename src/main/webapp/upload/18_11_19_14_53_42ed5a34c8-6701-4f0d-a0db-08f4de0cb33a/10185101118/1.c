#include<stdio.h>
void RunningAvg(float);
int main()
{
    float n;
    while(scanf("%f",&n)==1)
    {
        if(-1==n)break;
        RunningAvg(n);
    }
    return 0;
}
void RunningAvg(float n)
{
    static float c,d=0;
    static int i=0;
    d+=n;
    c=d/++i;
    printf("%.2f\n",c);
}
