#include<stdio.h>

int main(void)
{
    double data[100];
    double total = 0,output;
    int n;
    for(n = 1;n <= 100;n++){
        data[n-1] = 1.0/(2*n*(2*n+1)*(2*n+2));
    }
    for(n = 0;n < 100;n++){
        if(n%2==0)
            total += data[n];
        else
            total -= data[n];
    }
    output = 4.0*total+3.0;
    printf("%.4lf",output);
    return 0;
}
