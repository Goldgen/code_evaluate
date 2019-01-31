#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int change(int a)
{
    int j,k,p;
    int sum=0;
    int i=10;
    k=0;
    p=1;
    while(a!=0)
    {
        j=a%i/p;
        sum+=j*pow(8,k);
        a=a-j*pow(10,k);
        i*=10;
        ++k;
        p*=10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",change(n));
    return 0;
}
