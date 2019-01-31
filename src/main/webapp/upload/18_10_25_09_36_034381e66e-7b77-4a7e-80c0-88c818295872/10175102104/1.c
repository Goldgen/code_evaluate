#include<stdio.h>
#include<stdlib.h>
int main()
{   
    double h=100.0;
    double h_1=h/2,m=100.0;
    int n;
    for(n=1;n<10;n++)
    { 
        m=m+h_1*2;
        h_1=h_1/2;
    }
    printf("%.3lf %.3lf",m,h_1);
    return 0;
}