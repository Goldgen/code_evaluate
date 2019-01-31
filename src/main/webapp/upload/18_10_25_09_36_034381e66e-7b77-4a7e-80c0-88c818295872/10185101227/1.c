#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
int main()
{
    int i;
    float s,h;
    s=100;h=100;i=2;
    while (i<=10)
    {h=h/2;
    s=s+2*h;
    ++i;}
    h=h/2;
    printf("%.3f %.3f",s,h);
    return 0;
}
