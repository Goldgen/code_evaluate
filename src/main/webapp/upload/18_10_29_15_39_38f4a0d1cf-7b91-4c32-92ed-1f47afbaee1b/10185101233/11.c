#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n=100;
    int i=0;
    int a,b,c;
    while(n<=999)
    {
        a=(int)n/100;
        b=(int)(n-100*a)/10;
        c=n-100*a-10*b;
        if(n==pow(a,3)+pow(b,3)+pow(c,3))
        {   printf("%d ",n);
            i++;
        }
            n++;
        if(i==2)
        break;
    }
    while(n<=999)
    {
        a=(int)n/100;
        b=(int)(n-100*a)/10;
        c=n-100*a-10*b;
        if(n==pow(a,3)+pow(b,3)+pow(c,3))
            printf("%d",n);
        n++;
    }
    return 0;
}