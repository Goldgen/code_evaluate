#include <stdio.h>
#include <stdlib.h>

int main()
{
    double Arr[100],sum=0.0;
    int i;
    for(i=0;i<100;i++)
        Arr[i]=1.0/(2*(i+1)*(2*(i+1)+1)*(2*(i+2)));
    for(i=0;i<100;i++){
        if(i%2==0) sum=sum+Arr[i];
        if(i%2==1) sum=sum-Arr[i];
    }
    printf("%.4lf",sum*4.0+3.0);
    return 0;
}
