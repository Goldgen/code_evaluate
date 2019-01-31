#include <stdio.h>
#include <stdlib.h>
int main()
{
    double e = 0;
    int jie = 0;
    for (int i = 1;jie < 1000000;i++)
     {
        jie =1;
        for (int t = i ;t >=1; t --)
        {
        jie = jie *t;
        }
    e +=(double) 1/jie;
     }
    e = e+1;
    printf("%.6lf",e);
    return 0;
}
