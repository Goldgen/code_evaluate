#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
    double a=1;long long k;
    for(int i=1;i<15;i++){
            k=1;
        for(int j=1;j<=i;j++){
            k*=j;
        }
    a+=1.0/k;
    }
    printf("%.6f",a);
    return 0;
}

