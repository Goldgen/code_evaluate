#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,d=0;
    scanf("%d",&a);
    while(a>=1)
    {
        b=a%2;
        a=a/2;
        d=d+b;
    }
    printf("%d",d);
}
