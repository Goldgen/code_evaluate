#include <stdio.h>
#include <math.h>
int main(){
    int a, b, c, n = 0, x;
    scanf("%d+%d=%d", &a, &b, &c);
    if((c-b)%a==0){
        x = (c - b) / a;
        for( ;x / pow(10, n) > 1; ++n);
    }
    else{
        x = (c - a) / b;
        for( ;x / pow(10, n) > 1; ++n);
        n = -n;
    }
    printf("%d", n);
}
