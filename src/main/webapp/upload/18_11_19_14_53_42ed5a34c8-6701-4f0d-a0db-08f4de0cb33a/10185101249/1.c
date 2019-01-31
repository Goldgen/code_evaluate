#include <stdio.h>
float RunningAvg(float a){
    static float s=0;
    static int n=0;
    s+=a;
    n++;
    return s/n;
}
int main()
{
    float a;
    while(scanf("%f",&a)&&a!=-1){
	printf("%.2f\n",RunningAvg(a));
	}
return 0;
}
