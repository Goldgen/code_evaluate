#include <stdio.h>
int main()
{
    double i,j,k,e,E;
    for(i=1.0,E=1.0,e=1.0;E>0.0000001;i++)
    {
        for(j=1.0,k=1.0;j<i+1.0;j++)
        {
            k=k*j;
        }
        E=1.0/k;
        e=e+E;
    }
    printf("%.6lf",e);
    return 0;
}
