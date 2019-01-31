#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,b,c,i=0;
    scanf("%d+%d=%d",&a,&b,&c);
    while(a*pow(10,i)+b<=c)
    {
        ++i;
    }
    i=i-1;
    if(a*pow(10,i)+b==c)
        printf("%d",i);
    else
    {
        i=0;
        while(a+b*pow(10,i)<=c)
            ++i;
        printf("%d",-i);
    }
    return 0;
}
