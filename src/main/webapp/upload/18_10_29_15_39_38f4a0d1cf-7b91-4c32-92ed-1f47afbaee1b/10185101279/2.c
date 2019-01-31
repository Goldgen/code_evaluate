#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<math.h>

int main()
{
    double e=1.0;
    double jc=1.0;
    int n=1;
    for(;1/jc>=1e-6;n++)
    {
        jc*=n;
        e+=1/jc;
    }
    printf("%.6lf",e);








  return 0;
}
















