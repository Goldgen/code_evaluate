#include <stdio.h>
#include <math.h>

int Factorial(int n){
    return (n == 0)?1:n*Factorial(n - 1);
}

int main(void)
{
    int i;
    double e = 0;
    for (i = 0;(double)1/Factorial(i) >= pow(10,-6);i++){
        e += (double)1/Factorial(i);
    }
    printf("%.6lf",e);
    return 0;
}
