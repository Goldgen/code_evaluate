#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main(void)
{
    int i=0;
    double h1=100;
    double h2;
    for(i = 1,h1 = 100;i<=10;++i,h1=h1/2,h2=h2+h1*2);
    h2=h2+100-h1*2;
    printf("%.3f %.3f",h2,h1);
    return 0;
}
