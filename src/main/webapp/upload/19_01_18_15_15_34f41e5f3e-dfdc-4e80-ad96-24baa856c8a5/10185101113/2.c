#include <stdio.h>
int main()
{
    double e=1,E=1.0;
    int N=1;
    while (E<=1000000)
    {
        E*=N;
        N++;
        e+=1/E;
    }
   printf("%.6lf",e);
    return 0;
}

