#include <stdio.h>
#include <stdlib.h>

int main()
{
     float a=0.0;
     float sum=0.0;
     int m=1;
     float average;
     while(scanf("%f",&a)&&(a!=-1)){
        sum+=a;
        average=sum/m;
        m++;
        printf("%.2f\n",average);
     }
}
