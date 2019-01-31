#include <stdio.h>
int main()
{
    double i,j,k,n;
    int m;
    for(i=1.0,j=1.0,k=1.0,n=0,m=0;m<50;m++)
    {
        i=j;
        j=k;
        k=i+j;
        n=n+k/j;
    }
    printf("%.2lf",n);

    return 0;
}
