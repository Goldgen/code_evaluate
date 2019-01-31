#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100]={0.0};
    double sum=0.0;
    for(int i=0;i<100;i++){
        int m=2*(i+1);
        data[i]=1.0/(m*(m+1)*(m+2));
    }
    for(int i=0;i<100;i++){
        if(i%2!=0)
            data[i]=-data[i];
        sum+=data[i];
    }
    printf("%.4lf",4.0*sum+3.0);
    return 0;
}