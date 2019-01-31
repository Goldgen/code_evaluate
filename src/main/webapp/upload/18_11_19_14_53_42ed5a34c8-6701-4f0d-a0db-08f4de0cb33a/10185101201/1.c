#include<stdio.h>
float RunningAvg(float a,float b,float c)
{
    return (a+b)/c;
}
main()
{
    float i,j=0,k=1;
    scanf("%f",&i);
    while(i!=-1)
    {

        printf("%.2f\n",RunningAvg(i,j,k));
        j+=i;
        k++;
        scanf("%f",&i);
    }
    if(i==-1)
        return 0;
}
