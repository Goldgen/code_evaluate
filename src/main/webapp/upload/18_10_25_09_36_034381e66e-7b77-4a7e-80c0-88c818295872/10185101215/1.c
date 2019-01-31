#include<stdio.h>
#include<limits.h>
int main()
{
    float x,y,s,i;
    x=100;y=100;
    for(i=1;i<=10;i++)
    {
        x/=2;
        y+=2*x;
    }
        s=y-2*x;
        printf("%.3f %.3f",s,x);
    return 0;
}
