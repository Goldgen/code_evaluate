#include <stdio.h>
#include <math.h>

int main(void) {
    float a=1.0,b=2.0,c=0.0;
    int count = 1;
    float sum=0.0;
    for(count=1;count<=50;count++){
        sum+=b/a;
        c=b;
        b=a+c;
        a=c;
    }
    printf("%.2f",sum);
    return 0;
}

