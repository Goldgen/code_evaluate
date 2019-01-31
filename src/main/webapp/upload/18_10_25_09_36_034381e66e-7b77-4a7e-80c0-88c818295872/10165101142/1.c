#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i;
    double c=100,s=0;;
    for(i=0;i<10;i++){
        s=s+c;
        c=c/2;
        s=s+c;
    }
    s=s-c;
    printf("%.3lf %.3lf",s,c);
    return 0;
}


