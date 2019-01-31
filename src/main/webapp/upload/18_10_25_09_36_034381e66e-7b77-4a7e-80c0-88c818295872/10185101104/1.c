#include <stdio.h>

int main()
{
    double s=100,distance=100;
    int i;
    for(i=0;i<9;i++)
    {
        s=s/2;
        distance+=s*2;
    }
    s=s/2;
    printf("%.3lf %.3lf",distance,s);
    return 0;
}
