#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int fo,th,tw,sum;
    for(n=100;n<1000;n++)
    {
        fo=n/100;
        th=(n%100)/10;
        tw=(n%100)%10;
        sum=pow(fo,3)+pow(th,3)+pow(tw,3);
        if(sum==n&&n!=407)
            printf("%d ",n);
        else if(n==407)
            printf("%d",n);
        else
            continue;
    }
    return 0;
}
