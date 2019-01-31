#include<stdio.h>
int main()
{
    int a,f,s,t;
    a=154;
    printf("153");
    while((a<=999)&&(a>100))
    {
        f=a/100;
        s=(a/10)%10;
        t=a%10;
        if(a==f*f*f+s*s*s+t*t*t)
           printf(" %d",a);
        ++a;
    }
    return 0;
}