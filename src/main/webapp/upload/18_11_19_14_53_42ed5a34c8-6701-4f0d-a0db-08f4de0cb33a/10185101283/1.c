#include<stdio.h>
void runningavg(float a)
{
   static float b=0;
   static  float i=0;
    b=b+a;
    ++i;
    printf("%.2f\n",b/i);
}
int main()
{
    float n;
    while(1)
    {
        scanf("%f",&n);
        if(n==-1)
            break;
        runningavg(n);
    }
    return 0;
}
