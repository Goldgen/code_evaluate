#include <stdio.h>
#include <stdlib.h>

int main()
{
    double data[100] = {0.0};
    int i; double m;
    for(i=1; i<=100; i++){
        m = 2*i;
        data[i-1] = 1/(m*(m+1)*(m+2));
    }
    double result = data[0];
    for (i=1; i<100; i++){
        if (i%2==0) result += data[i];
        else result -= data[i];
    }
    printf("%.4lf",result*4.0+3.0);
    return 0;
}
