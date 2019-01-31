#include <stdio.h>
#include <stdlib.h>

int main()
{
    double h=100.0;
    int n=1;
    double s=0.0;
    while(n<=10){
        s+=h;
        h=h/2.0;
        s+=h;
        n++;
    }
    printf("%.3f %.3f",s-h,h);
    return 0;
}
