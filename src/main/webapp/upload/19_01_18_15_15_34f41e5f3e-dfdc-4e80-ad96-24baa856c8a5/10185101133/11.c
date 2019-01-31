#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n=100;
    while(n<1000){
        int a,b,c;
        a=n%10;
        b=(n/10)%10;
        c=n/100;
        if(n==a*a*a+b*b*b+c*c*c){
            printf("%d",n);
        if(n<400)
            printf(" ");}
        n++;
    }
    return 0;
}