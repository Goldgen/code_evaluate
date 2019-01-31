#include<stdio.h>
float average(float i);
int main()
{
    float a;
    while(scanf("%f",&a)!=EOF)
    {
        if(a==-1)
        {
            break;
        }
        printf("%.2f\n",average(a));
    }
    return 0;
}
float average(float i)
{
    static float sum=0;
    sum+=i;
    static float time=0;
    time+=1;
    return sum/time;
}
