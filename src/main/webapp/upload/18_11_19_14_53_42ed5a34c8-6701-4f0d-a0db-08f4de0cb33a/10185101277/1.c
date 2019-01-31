#include<stdio.h>
float RunningAvg(float a,int b);
int main()
{
    float n,m=0;
    int i=0;
    scanf("%f",&n);
    while(n!=-1){
            m+=n;
            i++;
            printf("%.2f\n",RunningAvg(m,i));
            scanf("%f",&n);
        }
    return 0;
}
float RunningAvg(float a,int b){
    return a/b;
}
