#include <stdio.h>
#include <stdlib.h>
#include <math.h>
const double pi=3.1415926;
int main()
{
    double a[100]={0},sum=0;
    int q=-1;
    for(int i=0;i<100;i++){
        int t=2*(i+1);
        a[i]=1.0/(t*(t+1)*(t+2));
            q*=-1;
        sum+=q*a[i];
    }
    sum=sum*4.0+3.0;
    printf("%.4f\n",sum);
}

